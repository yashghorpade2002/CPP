
# include <iostream>

class Rajesh;

class Ashish {
 
	private:

		int laptop = 3;

	public:
		friend void LapAccess(Ashish& refAshish, Rajesh& RefRajesh);

};
class Rajesh {

        private:

                int laptop = 5;

        public:
                friend void LapAccess(Ashish& refAshish, Rajesh& RefRajesh);

};

void LapAccess(Ashish& refAshish, Rajesh& RefRajesh){

	std::cout << refAshish.laptop + RefRajesh.laptop << std::endl;

}

int main () {
 
	Ashish obj1;
	Rajesh obj2;

	LapAccess(obj1, obj2);
	
	return 0;
}

