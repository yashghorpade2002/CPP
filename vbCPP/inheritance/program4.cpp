
# include <iostream>

class core2web {

	public:
		core2web() {
		
			std::cout << "c2w constructor" << std::endl;

		}

		~core2web() {
		
			std::cout << "c2w destructor" << std::endl;

		}

};
class incubator :public core2web {

        public:
                incubator() {

                        std::cout << "incubator constructor" << std::endl;

                }

                ~incubator() {

                        std::cout << "incubator destructor" << std::endl;

                }

};

class startsups :public incubator {

        public:
                startsups() {

                        std::cout << "startsups constructor" << std::endl;

                }

                ~startsups() {

                        std::cout << "startsups destructor" << std::endl;

                }

};

int main() {

	startsups obj;
	return 0;

}
