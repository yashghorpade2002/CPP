# include <iostream>

class core2web {

	int emp =30;

	public:
	
	void motive() {
	
		std::cout << "core programing classes" << std::endl;
		std::cout << "emp" << std::endl;

	}
};

class binecaps {

	int emp = 40;

	public:
	 
	void motive() {
	
		std::cout << "building inovative softwares" << std::endl;
		std::cout << emp << std::endl;

	}
};

class incubator : public core2web , public binecaps {


	int emp = 50;

	public:

	void disp() {
	
		std::cout << emp << std::endl;
	}
};

int main() {

	incubator obj;
	obj.core2web::motive();
        obj.binecaps::motive();

	return 0;

}
