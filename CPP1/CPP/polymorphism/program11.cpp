# include <iostream>
class PNG {



};

class PNGSons : public PNG {




};

class parent {

	public:
		PNG obj;
		virtual PNG* buygold() {
		
			std::cout << "Gold from PNG" << std::endl;
			return &obj;

		}

};

class child: public parent {

	public:
		PNGSons obj;
		PNGSons* buygold() override {
		 
			 std::cout << "Gold from PNGSons" << std::endl;
			 return &obj;

	        }

};

int main() {

	parent *obj = new child();
	obj->buygold();
	
	return 0;

}
