# include <iostream>
# include <vector>
int main() {

	int n, y, x;
	std::cin >> x;
	std::vector<int> v1;
	std::vector<int> v2[1000];
	for(int i=0; i<n; i++) {
	
		std::cin >> y;
		v1.push_back(y);
	}
	std::cin >> x;
	int a[1000];
	for(int j=0; j<(x-1); j++) {
		for(int k=0; k<n; k++) {
		
			std::cin >> a[j];
			v2[j].push_back(a[j]); 
		}
	}
	
	for(int q=1; q<=x; q++) {
		
		
	}

	return 0;
}
