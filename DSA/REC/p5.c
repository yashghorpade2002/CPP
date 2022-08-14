# include <stdio.h>

int LinearSearch(int *arr, int ele, int len) {

	static int i=0;
	if(i >= len)
		return -1;
	if(arr[i] == ele)
		return i;
	i++;
	LinearSearch(arr,ele,len);

}

void main() {

	int arr[] = {25,30,12,15,18,9,4,6};
	int len = sizeof(arr)/sizeof(int);

	int ele;
	printf("Enter the element to be searched \n");
	scanf("%d",&ele);

	int index = LinearSearch(arr,ele,len);

	if(index != -1)
		printf("Element is found at index %d \n",index);
	else
		printf("Element not found\n");

}
