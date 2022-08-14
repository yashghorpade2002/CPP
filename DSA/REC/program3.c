# include <stdio.h>

int swaparr(int arr[], int n) {

	int i = 0;
	
	while(i <= n/2) {
	
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
		i++;
	}
}

void main() {

	int arr[5] = {1,2,3,4,5};
	int n = 5;
	swaparr(arr, n);
	for(int i=0; i<5; i++) {
	
		printf("%d ",arr[i]);

	}
	printf("\n");

}
