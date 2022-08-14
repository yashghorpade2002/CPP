# include <iostream>
int main() {

	for(int i=1; i<=8; i++) {
	
	
		switch(i) {
			
			case 1:
				for(int j=1; j<=8; j++) {
				
					if(j==1 || j==8) {
					
						printf("* ");
					} else {
					
						printf("  ");
					}
				}
				printf("\n");
				break;
			case 2:
				for(int j=1; j<=8; j++) {
				
					if(j==1 || j==2 || j==7 || j==8) {
					
						printf("* ");
					} else {
					
						printf("  ");
					}
				}
				printf("\n");
				break;
			case 3:
				for(int j=1; j<=8; j++) {
				
					if(j==1 || j==2 || j==3 || j==6 || j==7 ||j==8) {
					
						printf("* ");
					} else {
					
						printf("  ");
					}
				}
				printf("\n");
				break;

			case 4:
				for(int j=1; j<=8; j++) {
				
					printf("* ");
				
				}
				
				printf("\n");
				break;

			case 5:
				for(int j=1; j<=8; j++) {
				
					if(j==1 || j==2 || j==3 || j==6 || j==7 || j==8) {
					
						printf("* ");
					} else {
					
						printf("  ");
					}
				}
				printf("\n");
				break;

			case 6:
				for(int j=1; j<=8; j++) {
				
					if(j==1 || j==2 || j==7 || j==8) {
					
						printf("* ");
					} else {
					
						printf("  ");
					}
				}
				printf("\n");
				break;

			case 7:
				for(int j=1; j<=8; j++) {
				
					if(j==1 || j==8) {
					
						printf("* ");
					} else {
					
						printf("  ");
					}
				}
				printf("\n");
				break;

		/*	case 8:
				for(int j=1; j<=8; j++) {
				
					printf("* ");
			
				}	
				
				printf("\n");
				break;*/

		}
	}


	return 0;
}
