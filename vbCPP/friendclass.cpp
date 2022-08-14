
# include <iostream>

class FriendAccess;
class Farmhouse {
 
	private:
		int TV = 1;
		int Bedroom = 2;
		int Swimmingpool = 3;

	public:
		void display() {
		 
			std::cout << TV << std::endl;
			std::cout << Bedroom << std::endl;
			std::cout << Swimmingpool << std::endl;

		}

	friend class FriendAccess;
};

class FriendAccess {
 
	public:

		void Member1(Farmhouse& ref) {
		 
			std::cout << ref.TV << std::endl;
                        std::cout << ref.Bedroom << std::endl;
                        std::cout << ref.Swimmingpool << std::endl;

		}

		void Member2(Farmhouse& ref) {
		 
			std::cout << ref.TV << std::endl;
                        std::cout << ref.Bedroom << std::endl;
                        std::cout << ref.Swimmingpool << std::endl;

		}
};

int main () {
 
	Farmhouse obj1;
	obj1.display();
	FriendAccess obj2;
	obj2.Member1(obj1);
	obj2.Member2(obj1);

	return 0;

}
