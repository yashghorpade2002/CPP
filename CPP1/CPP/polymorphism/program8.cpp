# include <iostream>
class Ambani{

	public:
		void JIO() {
		
			std::cout << "JIO" << std::endl;

		}

		void Reliance() {
		
			std::cout << "Reliance Industry" << std::endl;

		}
};

class Anant: public Ambani {

	public:
                void JIO() {

                        std::cout << "JIOMart" << std::endl;

                }

};

class Akash:public Ambani {

	public:

                void Reliance() {

                        std::cout << "Reliance Digital" << std::endl;

                }

};

int main() {

	Ambani *obj1 = new Anant();
	obj1->JIO();

	Ambani *obj2 = new Akash();
	obj2->Reliance();

	std::cout << sizeof(Ambani) << std::endl;
	std::cout << sizeof(Anant) << std::endl;
	std::cout << sizeof(Akash) << std::endl;

	return 0;

}
