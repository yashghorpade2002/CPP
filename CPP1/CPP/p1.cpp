# include <iostream>

class Minutes {

	int x;

	public:
		Minutes(int x) {
		
			this-> x = x;
		}

		void disp() {
		
			std::cout << "Minutes in seconds is : " << x*60 << std::endl;
		}

};

class Seconds {

	int y;

	public:
		Seconds(int y) {
		
			this-> y = y;
		}

		void show() {
		
			std::cout << "Seconds in minutes are : " << y/60 << std::endl;
		}
};

int main() {

	int a;
	std::cout << "Bi-Directional converter" << std::endl;
	std::cout << "What do you want to convert \n \t 1] Minutes to Seconds \n \t 2] Seconds to Minutes" << std::endl;
	std::cout << "Enter your choice : ";
       	std::cin >> a;

	switch(a) {
		
		case 1: {
			int x;
			std::cout << "Enter Minutes : " ;
       			std::cin >> x;

			Minutes obj(x);
			obj.disp();
			break;
		}

		case 2: {
			int y;
			std::cout << "Enter Seconds : " ;
			std::cin >> y;

			Seconds obj1(y);
			obj1.show();
			break;
		
		}
	}

	return 0;
}
