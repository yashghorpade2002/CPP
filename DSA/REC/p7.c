
// Implementation of binarySearch using Recursion

# include <stdio.h>

int binarySearch(int arr[], int ele, int start, int end) {

	//int start = 0;
	//int end = len - 1;

	if(start <= end) {
	
		int mid = (start + end)/2;

		if(arr[mid] == ele)
			return mid;

		if(arr[mid] < ele) {
		
			//start = mid + 1;
			return binarySearch(arr, ele, mid+1, end);

		}else {
		
			//end = mid - 1;
			return binarySearch(arr, ele, start, mid-1);

		}
	}	
	return -1;
}

void main() {

	int arr[] = {12,28,68,99,125,225,356,456,789,999,1120};
	int len = sizeof(arr)/sizeof(int);
	int start = 0;
	int end = len - 1;

	int ele;
	printf("Enter the element to be searched\n");
	scanf("%d",&ele);

	int index = binarySearch(arr,ele,start,end);

	if(index != -1)
		printf("Element is found at index %d \n",index);
	else
		printf("Element not found\n");

}
