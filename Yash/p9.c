# include <stdio.h>
# include <stdlib.h>

void main() {

	int arr[10];
	int a;
	printf("Enter the elements to be inserted : ");
	scanf("%d",&a);
	printf("Enter elements:");
	for(int i=0; i<a; i++) {
	
		scanf("%d",&arr[i]);
	}
	printf("Elements are: ");
	for(int i=0; i<a; i++) {
		printf("%d\n",arr[i]);
	}
	//for(int c=0; c<a; c++) {
		int b;
		b = arr[0] + arr[a-1];
		for(int i=0; i<a; i++) {
		
			if(arr[i] == b && a!=10) { 
				scanf("%d",&arr[b]);
				a++;
			}
		}

	//}
	printf("Elements are: \n");
	for(int i=0; i<=a; i++) {
	
		printf("%d\n",arr[a]);
	}
}
