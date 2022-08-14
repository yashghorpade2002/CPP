# include <iostream>
# include <vector>

void showvector(std::vector <int> vec) {

	for(auto itr = vec.begin(); itr!=vec.end(); itr++) {
	
		std::cout << *itr << std::endl;

	}
}

int main() {

	std::vector <int> v = {10,20,30,40,50,60} ;
	// push back
	v.push_back(70);
	showvector(v);
	std::cout << "================" << std::endl;

	// pop back
	v.pop_back();
	v.pop_back();
	showvector(v);
	std::cout << "================" << std::endl;
	
	// assign
	v.assign(2,50);
	showvector(v);
	std::cout << "================" << std::endl;
	
	//insert
	v.insert(v.begin(),25);
	showvector(v);
	std::cout << "================" << std::endl;

	// erase
/*	v.erase(v.begin());
	showvector(v);
	std::cout << "================" << std::endl;
*/

	// new vector
	std::vector <int> v1;
	v1.assign(5,55);
	std::cout << "New vector v1" << std::endl;
	showvector(v1);
	std::cout << "================" << std::endl;

	// swap
	v.swap(v1);
	std::cout << "Vector v" << std::endl;
	showvector(v);
	std::cout << "================" << std::endl;
	std::cout << "Vector v1" << std::endl;
	showvector(v1);
	std::cout << "================" << std::endl;

	return 0;

}
