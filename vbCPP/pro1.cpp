# include <iostream>

class oppload {

	private:
		int x;
		int y;


	public:
		oppload(int x, int y) {
		
			this-> x = x;
			this-> y = y;

		}

		void disp() {
		
			std::cout << x << ":" << y << std::endl;

		}

		friend oppload operator+(oppload& ref1, oppload& ref2) {
		
			

			ref1.x = ref1.x + ref2.x;
			ref2.y = ref2.y + ref2.y;

			return ref1,ref2;

		}
};

int main() {

	
	oppload obj1(1,2);
	oppload obj2(2,1);

	obj1.disp();         // 4:6
	obj2.disp();                   // 6:4

	obj1 = obj1 + obj2;                          
	obj1.disp();                            // 10:10       

	return 0;

}
