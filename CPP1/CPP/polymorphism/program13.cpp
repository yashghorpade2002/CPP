# include <iostream>

class parent {

	public:
		void educate() {
		
			std::cout << "We will do hard work and provide a quality education to you" << std::endl;

		}

		virtual ~parent() =0;
		virtual void marry() = 0;

		virtual void career() = 0;
};

parent::~parent() {

	std::cout << "parent destructor" << std::endl;

}

class child: public parent {

	public:
		void marry() {
		
			std::cout << "Deepali" << std::endl;

		}

		void career() {
		
			std::cout << "Software engineer" << std::endl;

		}

};

int main() {
	
	parent *obj = new child();
	obj->educate();
	obj->marry();
	obj->career();
	delete obj;

	return 0;

}
