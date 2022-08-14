# include <stdio.h>
int count = 0;

void SelectionSort(int arr[], int len) {

	static int i = 0;

	if(i == len)
		return;

	for(int j=i+1; j<=len-1; j++) {
	
		count++;
		if(arr[i] > arr[j]) {
		
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

		}
	}
	i++;
	SelectionSort(arr,len);
}


void main() {

	int arr[] = {12,2,8,5,4,24,7};

	int len = sizeof(arr)/sizeof(int);

	printf("Orignal array is \n");
	for(int i=0; i<=len-1; i++) {
	
		printf("%d ",arr[i]);
	}
	printf("\n");

	SelectionSort(arr,len);
	
	printf("%d\n",count);
	printf("Sorted array is \n");
	for(int i=0; i<=len-1; i++) {
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
