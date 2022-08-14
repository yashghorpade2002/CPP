
// reference

# include <iostream>

class FunOverload {

        public:
                void fun(int x) {

                        std::cout << "int" << std::endl;

                }

                void fun(int &x) {

                        std::cout << "int - ref" << std::endl;

                }

};

int main() {

        FunOverload obj;
	obj.fun(10);
        // Reference is always applicable to any variable only
	int x = 10;
        obj.fun(x);	// ERROR
	return 0;

}

