// ITERATOR
# include <iostream>
# include <vector>

int main() {

	std::vector <int> v = {10,11,12,13,14,15};

	for(auto itr = v.begin(); itr != v.end(); itr++) {
			
		std::cout << *itr << std::endl;
	}
	
	std::cout << "=============================================" << std::endl;

	for(auto itr1 = v.rbegin(); itr1 != v.rend(); itr1++) {
			
		std::cout << *itr1 << std::endl;
	}
	
	return 0;

}
