# include <iostream>
int main() {


	for(int i=1; i<=8; i++) {
		
		if(i<=4) {
		
			int x=1;
			for(int j=1; j<=i; j++) {
				
				//std::cout << x << " " << x++;
				printf("%d ", x);
				x++;
			}

		} else {
			
			int a=1;
			for(int k=8; k>=i; k--) {
			
				//std::cout << a << " " << a++;
				printf("%d ", a);
				a++;
			}
		} 
		std::cout << "\n";	

	}

	return 0;
}
