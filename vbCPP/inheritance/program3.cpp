/*types of inheritance 
    1] single inheritance
    2] Multiple inheritance
    3] multilevel inheritance
*/

# include <iostream>

class Core2web {

	private:
		int x = 10;

	public:
		void disp() {
		
			std::cout << x << std::endl;

		}
};

class Incubator: protected Core2web {

	int x = 20;

	public:
	      
	        void disp() {
		
			std::cout << x << std::endl;

		}
	
	
	

};

int main () {

	Core2web obj1;
	obj1.disp();

	Incubator obj2;
	obj2.disp();
	return 0;

}
