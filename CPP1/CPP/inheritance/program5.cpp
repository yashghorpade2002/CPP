
# include <iostream>
class core2web {

	int x =10;

        public:
                core2web() {

                        std::cout << "c2w constructor" << std::endl;

                }

                ~core2web() {

                        std::cout << "c2w destructor" << std::endl;

                }

		void disp() {
		
			std::cout << x << std::endl;

		}

};

class Biencaps {

	int y =20;

	public:
		Biencaps() {
		
			std::cout << "Biencaps constructor" << std::endl;

		}

		~Biencaps() {
		
			std::cout << "Biencaps destructor" << std::endl;

		}

		void display() {
		
			std::cout << y << std::endl;

		}
};

class incubator: public core2web , public Biencaps {

	int z =30;

	public:
		incubator() {
		
			std::cout << "incubator constructor" << std::endl;

		}
		
		~incubator() {
		
			std::cout << "Incubator destructor" << std::endl;

		}

		void multiple() {
		
			std::cout << z << std::endl;

		}
 };
	
int main() {

	incubator obj;
	obj.disp();
	obj.display();
	obj.multiple();

	return 0;

}
