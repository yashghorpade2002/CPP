# include <iostream>

class Players {

	public:

	        Players() {

			std::cout << "In parent constructor" << std::endl;
	
		}

		~Players() {

                        std::cout << "In parent destructor" << std::endl;

                }



};

class Cricket:public Players {

	public:

		Cricket() {
		
			// superb ()
			std::cout << "In child constructor" << std::endl;

		}

		~Cricket() {

			std::cout << "In child destructor" << std::endl;

                }


};

int main() {

	Players obj1;
	Cricket obj2;

	return 0;

}
