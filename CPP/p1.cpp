# include <iostream>
int main() {
	int a[10][10], b[10][10], add[10][10] ;
	int r1, c1, r2, c2;

	std::cout << "Enter rows and columns of first matrix : " ;
	std::cin >> r1 >> c1;
	std::cout << "Enter rows and columns of second matrix : " ;
	std::cin >> r2 >> c2;

	while(r1 != r2 && c1 != c2) {
	
		std::cout << "the no of rows and columns of both the matrices must be the same" << std::endl;
		std::cout << "Enter rows and columns of first matrix : " << std::endl;
		std::cin >> r1 >> c1;
		std::cout << "Enter rows and columns of second matrix : " << std::endl;
		std::cin >> r2 >> c2;

	}
	std::cout << "Enter for elements for matrix a" << "\n" << std::endl;
	for(int i=0; i<c1; i++) {
		for(int j=0; j<r1; j++) {
		
			std::cout << "Enter the element no " << i+1 << j+1 << " : ";
			std::cin >> a[i][j];
		}
	}
	std::cout << "Enter for elements for matrix b" << "\n" << std::endl;
	for(int i=0; i<c1; i++) {
		for(int j=0; j<r1; j++) {
		
			std::cout << "Enter the element no " << i+1 << j+1 << " : ";
			std::cin >> b[i][j];
		}
	}	
	for(int i=0; i<c1; i++) {
		for(int j=0; j<r1; j++) {
		
			add[i][j] = 0;
		}
	}
	for(int i=0; i<c1; i++) {
		for(int j=0; j<r1; j++) {
			
			add[i][j] = a[i][j] + b[i][j];
		
		}
	}
	std::cout << "The addition matrix is" << std::endl;
	std::cout << "\n";
	for(int i=0; i<c1; i++) {
		for(int j=0; j<r1; j++) {
		
			std::cout << add[i][j] ;
		}
		std::cout << "\n" ;
	}

	return 0;
	
}
