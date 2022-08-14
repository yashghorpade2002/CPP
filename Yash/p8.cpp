# include <iostream>
int main() {


	int n,a;
	std::cin >> n;
	a = n/2 + 1;
	//std::cout << a << std::endl;	

	for(int i=1; i<=a; i++) {

	//int b = n;	
		for(int j=1; j<=a; j++) {
		
			if(j<=i) {
			
				std::cout << j << " ";

			} else {
			
				std::cout << "  ";
			}
			
		}

		for(int k=(a-1); k>=1; k--) {
		
			if(k<=i) {
			
				std::cout << k << " ";
			}else {
			
				std::cout << "  ";
			}

		}
		std::cout << "\n";

	}
	for(int i=1; i<=a; i++) {

		
		for(int j=1; j<=a; j++) {
		
			if(j>=i) {
			
				std::cout << j << " ";

			} else {
			
				std::cout << "  ";
			}
			
		}

		for(int k=(a-1); k>=1; k--) {
		
			if(k>=i) {
			
				std::cout << k << " ";
			}else {
			
				std::cout << "  ";
			}

		}
		std::cout << "\n";

	}
	return 0;
}
