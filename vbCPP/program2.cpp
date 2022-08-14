// SINGLE TON DESIGN PATTERN
/* Only one object creation is allowed in this pattern
   this pattern is commonly used in server side coading to keep server activate 24 by 7 */

/*# include <iostream>

class Singleton {
 
	private:
		Singleton() {
		 
			std::cout<<"In constructor"<<std::endl;

		}

	public:
		static Singleton  getobject() {
		 
		        static Singleton obj1;
			return obj1;
		}


};

int main() {
 
        Singleton obj1 = Singleton::getobject();
	Singleton obj2 = Singleton::getobject();

	std::cout<<&obj1<<std::endl;
	std::cout<<&obj2<<std::endl;


  return 0;
}
*/
# include <iostream>

class Singleton {

        private:
                Singleton() {

                        std::cout<<"In constructor"<<std::endl;

                }

        public:
                static Singleton*  getobject() {

                        static Singleton * obj1 = new Singleton();
                        return obj1;
                }


};

int main() {

        Singleton *ptr1 = Singleton::getobject();
        Singleton *ptr2 = Singleton::getobject();

        std::cout<<ptr1<<std::endl;
        std::cout<<ptr2<<std::endl;


  return 0;
}
