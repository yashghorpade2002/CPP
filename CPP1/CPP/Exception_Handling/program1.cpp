# include <iostream>

class Grandparent {

	public:
		Grandparent() {
		
			std::cout << "Grandparent Constructor" << std::endl;
		}
		Grandparent (Grandparent& ref) {

                        std::cout << "=================Copy Grandparent Constructor" << std::endl;
                }

		~Grandparent() {
		
			std::cout << "Grantparent Destructor" << std::endl;
		}
		
};

class Parent : public Grandparent {

	public:
		Parent() {
		
			std::cout << "Parent Constructor" << std::endl;
		}
		Parent(Parent& ref) {
		
			std::cout << "=================Copy Parent Constructor" << std::endl;

		}
		~Parent() {
		
			std::cout << "Parent Destructor" << std::endl;
		}
};

class Child : public Parent {

	public:
		Child() {
		
			std::cout << "Child Constructor" << std::endl;
		}
		Child(Child& ref) {
		
			std::cout << "=================Copy Child Constructor" << std::endl;

		}
		~Child() {
		
			std::cout << "Child Destructor" << std::endl;
		}
};

int main() {

	try {

		std::cout << "In Try" << std::endl;
		Child obj;
		throw obj;

	}catch(Grandparent obj1) {

		std::cout << "In Catch" << std::endl;
	}

	std::cout << "End of main" << std::endl;

	return 0;
}
