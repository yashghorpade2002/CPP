# include <iostream>

class Demo{
 
	private:
		int drinkcount;

	public:
		Demo(int myAccess) {
		 
			drinkcount = myAccess;

		}

		void Access();

		friend void frAccess(Demo &ref);

};

void Demo::Access() {
 
	std::cout << drinkcount << std::endl;

}

void frAccess(Demo &ref) {
 
	ref.drinkcount += 3;
	std::cout << ref.drinkcount << std::endl;

}

int main () {
 
	Demo obj(5);
	obj.Access();
	frAccess(obj);

 return 0;
}
