# include <iostream>
# include <vector>
int main() {
	int n;
	std::cin >> n;
	std::vector <int> v(n);
	for(int i=0; i<n; i++) {
	
		std::cin >> v[i];
	}

	int swap = 0;
	for(int i=0; i<n; i++) {
	
		for(int j=0; j<n-i-1; j++) {
		
			if(v[j] > v[j+1]) {
			
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				swap++;
			} 
		}
	}
	std::cout << "Array is sorted in " << swap << " swaps." << std::endl;
	std::cout << "First Element: " << v[0] << std::endl;
	std::cout << "Last Element: " << v[n-1] << std::endl;

	return 0;
}
