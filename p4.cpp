# include <iostream>
int main() {

	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2;
	
	std::cout << "Enter rows and columns for first matrix :" << std::endl;
	std::cin >> r1 >> c1;

	std::cout << "Enter rows and columns for second matrix :" << std::endl;
	std::cin >> r2 >> c2;

	while(c1!=r2) {
		
		std::cout << "Error!! column of first matrix is not equal to row of second. " << std::endl;
		
		std::cout << "Enter rows and columns for first matrix :" << std::endl;
		std::cin >> r1 >> c1;

		std::cout << "Enter rows and columns for second matrix :" << std::endl;
		std::cin >> r2 >> c2;
		
	}

	std::cout << std::endl << "Enter elements of matrix 1 :" << std::endl;
	for(int i=0; i<r1; i++) {
		
		for(int j=0; j<c1; j++) {
		
			std::cout << "Enter elements of a " << i+1 << j+1 << ": ";
			std::cin >> a[i][j];
		}
	}

	std::cout << std::endl << "Enter elements of matrix 2 :" << std::endl;
	for(int i=0; i<r2; i++) {
		
		for(int j=0; j<c2; j++) {
		
			std::cout << "Enter elements of b " << i+1 << j+1 << ": ";
			std::cin >> b[i][j];
		}
	}

	for(int i=0; i<r1; i++) {

		for(int j=0; j<c2; j++) {
		
			mult[i][j] = 0;
		}
	}

	for(int i=0; i<r1; i++) {
		for(int j=0; j<c2; j++) {
			for(int k=0; k<c1; k++) {
			
				mult[i][j] += a[i][k] * b[k][j]; 
			}
			
		}
	}

	std::cout << std::endl << "Output matrix : " << std::endl;

	for(int i=0; i<r1; i++) {
		for(int j=0; j<c2; j++) {
	
			std::cout << " " << mult[i][j];
			if(j == c2-1) {
				std::cout << std::endl;
			}
		}
	}
	return 0;
}
