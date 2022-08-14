# include <iostream>

class Ambani {

	public:
	        virtual int JIO(int x) {
		
			std::cout << "JIO" << std::endl;
			return 1;

		}

};

class Anant : public Ambani {

	public:
		int JIO(int x) {
		
			std::cout << "JIODigital" << std::endl;
			return 10;

		}
};

int main() {

	Ambani *obj = new Anant();
	obj-> JIO(10);

	return 0;

}
