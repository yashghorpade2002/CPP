# include <iostream>
class Ambani {
	typedef short int JIOALL;

	public:
		virtual void JIO(JIOALL x) {
		
			std::cout << "JIO" << std::endl;

		}

};

class Anant : public Ambani {

	typedef short int JIOMART;

	public:
		void JIO(JIOMART x) {
		
			std::cout << "JIOMart" << std::endl;

		}
};

int main() {

	Ambani *obj = new Anant;
	obj->JIO(10);

	return 0;

}
