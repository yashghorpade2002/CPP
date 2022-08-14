/*# include <iostream>

class AddTwo {
 
	public:
		int x = 20;
		int y = 30;

};

int main () {
 
	AddTwo obj;
	std::cout << obj.x + obj.y << std::endl;

	return 0;

}*/

/*# include <iostream>

class AddTwo {

	private:
		int x = 20;
		int y = 30;

	public:
		void disp() {
		
			std::cout << x + y <<std::endl;

		}
};

int main() {

	AddTwo obj;
	obj.disp();

	return 0;

}*/

# include <iostream>
class AddTwo {

	private:
		int x = 20;
		int y = 30;

	public:
		friend int operator+(AddTwo& ref1, AddTwo& ref2);

};

int operator+(AddTwo& ref1, AddTwo& ref2) {

	return ref1.x + ref2.x ;
}

int main() {

	AddTwo obj1;
	AddTwo obj2;
        
	std::cout << obj1 + obj2 <<std::endl;

	return 0;

}
