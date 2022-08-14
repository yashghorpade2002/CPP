/* Types of inheritance
   1] public inheritance
   2] private inheritance
   3] protected inheritance

   protected:
        it is a type of inheritance in which the derived classes are only capable of accessing the functions or instance variables so far from the parent class.

*/

# include <iostream>

class Core2Web {

	private:
		int x;

	protected:
		int y;

	public:
		int z;

		void disp() {
		
			std::cout << x << std::endl; // x is not accesable coz private within this content
			std::cout << y << std::endl; // accessible 
			std::cout << z << std::endl; // accessible

		}
};

class Incubator:public Core2Web { 

	//private contect is not accessable in the public inheritance
	public:
                void dispchild() {

                        std::cout << x << std::endl;    // private ==> private
                        std::cout << y << std::endl;    // protected ==> protected
                        std::cout << z << std::endl;    // public ==> public

                }
};


class Incubator: private Core2Web {

	// private contect is not accessable in the private inheritance
	public:
		void dispchild() {
		
			std::cout << x << std::endl;    // private ==> private
			std::cout << y << std::endl;    // protected ==> private
			std::cout << z << std::endl;    // public ==> private

		}
};

class Incubator: protected Core2Web {

	// private contect is not accessable in the protected inheritance
        public:
                void dispchild() {

                        std::cout << x << std::endl;    // private ==> private
                        std::cout << y << std::endl;    // protected ==> protected
                        std::cout << z << std::endl;    // public ==> protected

                }
};

int main() {

	// protected and private contect is not available in this function

	Core2Web obj1;                     // public:    private:    protected:

	std::cout << obj1.x << std::endl;  // error      error        error
	std::cout << obj1.y << std::endl;  // error      error        error
	std::cout << obj1.z << std::endl;  // done       error        error

	Incubator obj2;

	std::cout << obj2.x << std::endl;  // error      error        error
	std::cout << obj2.y << std::endl;  // error      error        error
	std::cout << obj2.z << std::endl;  // done      error        error

	return 0;

}
