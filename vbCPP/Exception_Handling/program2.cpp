# include <iostream>

void run() {
	
	try {
	
		std::cout << "in run try" << std::endl;
		throw 10;

	}catch(char) {
	
		std::cout << "in catch run" << std::endl;
	}


}
void fun() {
	
	try {
	
		std::cout << "in fun try" << std::endl;
		throw "Exception 1";
	
	}catch(int) {
	
		std::cout << "in fun catch int" << std::endl;
	}

}

int main() {
	
	try {

		std::cout << "in main try" << std::endl;
		run();
		fun();

	}catch(const char* str) {
	
		std::cout << "in main catch" << std::endl;
		std::cout << str << std::endl;

	}
	return 0;
}
