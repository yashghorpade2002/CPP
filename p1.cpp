# include <iostream>
class People {
	int x;
	public:
		People() {
			std::cout << "No argument constructor" << std::endl;

		}
		People(People& ref) {
		
			std::cout << "Copy constructor" << std::endl;
		}
		
		People(int x) {
		
			std::cout << "Parameterised constructor" << std::endl;
		}
		~People() {
			std::cout << "Destructor" << std::endl;

		}
		



};

int main() {
	People obj;
	People * ptr = new People();
	return 0;
}
