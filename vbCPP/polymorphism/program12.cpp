# include <iostream>

class parent {
	public:


		parent() {
	
			std::cout << "Parent constructor" << std::endl;

		}

		virtual ~parent() {
	
			std::cout << "Parent destructor" << std::endl;

		}

};

class child : public parent {

	public:
		

		child() {
	
			std::cout << "child constructor" << std::endl;

		}	

		~child() {
	
			std::cout << "child destructor" << std::endl;

		}

};

int main() {

	//child obj;
	parent *obj = new child;
	delete obj;

	std::cout << sizeof(parent) << std::endl;
	std::cout << sizeof(child) << std::endl;

	return 0;

}
