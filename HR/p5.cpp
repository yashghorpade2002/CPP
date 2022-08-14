# include <iostream>
# include <vector>
int main() {
	
	int n;
	std::cin >> n;

	std::vector<int> arr(n);
	
	for(int i=0; i<n; i++) {
	
		std::cin >> arr[i];
	}
	for(int j=n-1; j>=0; j--) {
	
		std::cout << arr[j] << " ";
	}
	std::cout << std::endl;

	return 0;
}
