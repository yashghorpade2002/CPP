
# include <iostream>

class audi {

	private:
		int A;
		int Q;

	public:
		audi(int A, int Q) {
		
			this-> A = A;
			this-> Q = Q;

		}
		
		void disp() {
		
			std::cout << "Total Cars of Model A6: " << A << std::endl;

			std::cout << "Total Cars of Model Q7: " << Q << std::endl;

		}

		int getA() {
		
			return A;

		}

		int getQ() {
		
			return Q;
		}

		/*friend void operator+(audi& ref1, audi& ref2) {
		
			ref1.A = ref1.A + ref2.A;
			ref1.Q = ref1.Q + ref2.Q;
		}*/

		/*void operator+(audi& ref) {
		
			this-> A = ref.A + A;
			this-> Q = ref.Q + Q;

		}*/


};

audi operator+(audi& ref1, audi& ref2) {
        
	int x;
	
	return audi(ref1.getA() + ref2.getA(), ref1.getQ() + ref2.getQ());
}

int main() {

	audi obj1(5,9);
	audi obj2(3,7);

	obj1.disp();
        obj2. disp();

	obj1 = obj1 + obj2;
	obj1.disp();

	return 0;

}
