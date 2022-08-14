# include <iostream>
int main() {

	int n;
	std::cin >> n;
	for(int i=0; i<n; i++) {
	
		int num = 0;
		for(int j=0; j<n; j++) {
		
			if(j==i || i==n-(j+1)) {

				if(j==i) {
					if(num>9) {
						int temp = num/10;
						std::cout << temp << " ";
					} else {
					
						std::cout << num << " ";
					}
				} else {
					if(n>9){
					       	int temp1 = (n-1)/10;	
						std::cout << temp1 << " ";
					} else {
					
						std::cout << n-1 << " ";
					}	
				}
			} else {			
				std::cout << "* ";
			}
			num = num + 2;
		}

		std::cout << "\n";
	}
	return 0;
}
