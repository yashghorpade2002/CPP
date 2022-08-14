

// Implementation of Ternary Search using recursion
# include <stdio.h>

int ternarySearch(int arr[], int start, int end, int ele) {

	if(start > end)
		return -1;
	else {

		int mid1 = start + (end - start)/3;
		int mid2 = end - (end - start)/3;

		if(arr[mid1] == ele)
			return mid1;
		if(arr[mid2] == ele)
			return mid2;
		if(ele > arr[mid2])
			ternarySearch(arr,mid2+1,end,ele);
		else if(ele < arr[mid1])
			ternarySearch(arr,start,mid1-1,ele);
		else 
			ternarySearch(arr,mid1+1,mid2-1,ele);
	}
}

void main() {

	int arr[] = {2,5,23,34,44,56,66,78,97,99};
	int len = sizeof(arr)/sizeof(int);

	int ele;
	printf("Enter the element to be searched \n");
	scanf("%d",&ele);

	int start = 0;
	int end = len - 1;

	int index = ternarySearch(arr,start,end,ele);

	if(index != -1)
		printf("Element found at index : %d\n",index);
	else
		printf("Element not found\n");
}
