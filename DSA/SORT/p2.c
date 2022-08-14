# include <stdio.h>
int count = 0;

void BubbleSort(int arr[], int len){

	if(len == 0)
		return;

	for(int j=0; j<len-1; j++) {
		
		if(arr[j] > arr[j+1]) {
			
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
//			flag = 1;
		}
	}
	
	BubbleSort(arr, len-1);
}


void main() {

	int arr[] = {1,22,3,34,5,16,7};
	int len = sizeof(arr)/sizeof(int);

	printf("Orignal array is \n");
	for(int i=0; i<=len-1; i++) {
	
		printf("%d ",arr[i]);
	}
	printf("\n");

	BubbleSort(arr,len);
	printf("%d\n",count);
	printf("Sorted array is \n");
	for(int i=0; i<=len-1; i++) {
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
