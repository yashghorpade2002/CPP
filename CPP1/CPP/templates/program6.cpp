# include <iostream>
template <class T>
class Template {

	public:
		Template() {
		
			std::cout << "Template Constructor" << std::endl;
		}

};

template<>
class Template <int> {

	public:
		Template() {
		
			std::cout << "int Specific Template" << std::endl;
		}
};

int main() {
	
	Template <char> obj;
	Template <float> obj2;
	Template <int> obj3;
	Template <double> obj4;



	return 0;
}
