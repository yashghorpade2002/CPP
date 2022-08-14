//const

# include <iostream>

class FunOverload {

        public:
                void fun(const int &x) {

                        std::cout << "int - const" << std::endl;

                }

                void fun(int &x) {

                        std::cout << "int" << std::endl;

                }

};

int main() {

        FunOverload obj;
	const int x = 10;    // Direct const overload is not possible if you pass a pointer or reference then i can do for you
	
	// The compiler says that if you pass a ref or pointer using const keyword then i will make your oppload happen 
	// POINTER and REFERENCE are only applicable here
	obj.fun(x);       

	return 0;

}

