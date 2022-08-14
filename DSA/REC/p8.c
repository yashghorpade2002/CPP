

// Implementation of Ternary Search using looping concept
# include <stdio.h>

int ternarySearch(int arr[], int len, int ele) {

	int start = 0;
	int end = len - 1;

	while(start < end) {
	
		int mid1 = start + (end - start)/3;
		int mid2 = end - (end - start)/3;

		if(arr[mid1] == ele)
			return mid1;
		if(arr[mid2] == ele)
			return mid2;
		if(ele > arr[mid2])
			start = mid2 + 1;
		else if(ele < arr[mid1])
			end = mid1 - 1;
		else {
		
			start = mid1 + 1;
			end = mid2 - 1;
		}
		if(start == end && arr[start] == ele)
			return start;
	}
	return -1;
}

void main() {

	int arr[] = {2,5,23,34,44,56,66,78,97,99};
	int len = sizeof(arr)/sizeof(int);

	int ele;
	printf("Enter the element to be searched \n");
	scanf("%d",&ele);

	int index = ternarySearch(arr,len,ele);

	if(index != -1)
		printf("Element found at index : %d\n",index);
	else
		printf("Element not found\n");
}
