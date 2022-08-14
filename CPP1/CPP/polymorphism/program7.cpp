# include <iostream>
class parent{

	public:
		parent() {
		
			std::cout << "Parent constructor" << std::endl;

		}

		void carrer() {
		
			std::cout << "Computer engineer" << std::endl;

		}

	        virtual void marry() {
		
			std::cout << "Deepaka" << std::endl;

		}
};

class child: public parent {

	public:
		child() {
		
			std::cout << "Child constructor" << std::endl;

		}

		void music() {
		
			std::cout << "Play music" << std::endl;

		}

		void marry() {
		
			std::cout << "Disha" << std::endl;

		}

};

int main() {

	parent *obj = new child();
	obj->carrer();
	obj->marry();
/*
	child obj2;
	obj2.carrer();
	obj2.music();
	obj2.marry();

	std::cout << "\n ***************** \n" << std::endl;
	
	parent obj3;
	obj3.carrer();
	obj3.marry();
*/
	std::cout << sizeof(parent) << std::endl;
	std::cout << sizeof(child) << std::endl;
	return 0;
}
