# include <iostream>
# include <vector>

int main() {
	int n;
	std::cin >> n;

	for(int i=0; i<n; i++) {
		std::string str;
		std::cin >> str;

		for(int j=0; j<str.length(); j++) {
		
			if(j%2==0) {
			
				std::cout << str[j];
			}
		}
		
		std::cout << " ";

		for(int k=0; k<str.length(); k++) {
		
			if(k%2!=0) {
			
				std::cout << str[k];
			}
		}

		std::cout << std::endl;
	}

	return 0;
}
