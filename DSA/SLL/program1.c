# include <stdio.h>
void main() {

	int arr[5];
	int ele;
	printf("Enter values \n");
	for(int i=0; i<5; i++) {
	
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched : \n");
	scanf("%d", &ele);
	int flag = 0;
	for(int j=0; j<5; j++) {
	
		if(arr[j] == ele) {

			printf("Element is found \n");
			flag = 1;
			break;
		}
	}
	if(flag == 0) {
	
		printf("Element not found \n");
	}
}
