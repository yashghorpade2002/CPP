# include <stdio.h>
// 3D array representation
void main() {

	//int arr[2][3][3] = {{1,2,3,4,5,6,7,8,9} , {10,20,30,40,50,60,70,80,90}};
	int arr[2][3][3];
	for(int i=0; i<2; i++) {
	
		for(int j=0; j<3; j++) {
		
			for(int k=0; k<3; k++) {
			
				printf("Enter element at location %d %d %d : ", i, j, k);
				scanf("%d",&arr[i][j][k]);
			}
			//printf("\n");
		}
	}
	printf("Orignal Array is: \n");
	for(int i=0; i<2; i++) {
	
		for(int j=0; j<3; j++) {
		
			for(int k=0; k<3; k++) {
			
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
	}
	int a[3][3];
	int b[3][3];	
	for(int i=0; i<2; i++) {
	
		for(int j=0; j<3; j++) {
		
			for(int k=0; k<3; k++) {
			
				a[j][k] = arr[0][j][k];
				b[j][k] = arr[1][j][k];
			}
		}
	}
	for(int c=0; c<3; c++) {
	
		for(int d=0; d<3; d++) {
		
			for(int e=0; e<3; e++) {
			
				for(int f=0; f<3; f++) {
				
					if(a[c][d] = b[e][f]) {
					
						a[c][d]++;
						b[e][f]++;
					}
				}
			}
		}
	}
	for(int i=0; i<2; i++) {
	
		for(int j=0; j<3; j++) {
		
			for(int k=0; k<3; k++) {
			
				arr[0][j][k] = a[j][k];
				arr[1][j][k] = b[j][k];
			}
		}
	}
	printf("Modified arr is: \n");
	for(int i=0; i<2; i++) {
	
		for(int j=0; j<3; j++) {
		
			for(int k=0; k<3; k++) {
			
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
	}
}
