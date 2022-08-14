# include <stdio.h>
void main() {

	int arr[5];
	int ele;
	int flag = 0;
	printf("Enter elements: \n");
	for(int i=0; i<5; i++) {
	
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched:\n");
	scanf("%d", &ele);
	for(int i=0; i<5; i++) {
	
		if(arr[i] == ele) {
		
			printf("Element found \n");
			flag = 1;
		}
	}
	if(flag == 0) {
		
		printf("Element not found and inserted in arr at 0rth index :\n");
		int temp = 0;
		arr[5]++;
		for(int j=6; j>0; j--) {
		
			arr[j] = arr[j-1];
		}
		arr[0] = ele;
		printf("The modified arr is: \n");
		for(int i=0; i<6; i++) {
		
			printf("%d\n", arr[i]);
		}
	}

}
