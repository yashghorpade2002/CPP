# include <iostream>

template <class T>

class Template {

	T data;
	public:
		T disp() {
		
			return data;
		}
};

int main() {

	Template <int> obj;
	std::cout << sizeof(obj) << std::endl;


	Template <double> obj1;
	std::cout << sizeof(obj1) << std::endl;

	return 0;

}
