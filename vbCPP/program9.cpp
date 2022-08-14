
# include <iostream>

class Copyconstructor {

	private:
		int x;

	public:
		
		Copyconstructor () {
		
			std::cout << "no arg-constructor" << std::endl;

		} 
		Copyconstructor(int x) {
		
			this->x = x;
			std::cout << x << std::endl;

		}

		Copyconstructor(Copyconstructor& x) {
		
			std::cout << "Copy Constructor " << std::endl;

		}
		Copyconstructor disp(Copyconstructor& ref) {
		
			return ref;

		}


};

int main() {

	Copyconstructor obj1(20);
	Copyconstructor obj2 = obj1;

	//Copyconstructor obj3 = obj2.disp(obj1);
	
	Copyconstructor obj4(10);
	obj4 = obj2.disp(obj1);

	return 0;

}
