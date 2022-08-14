
# include <iostream>

class placements {

	private:
		int NOC;

	public:
		placements(int NOC) {
		
			this-> NOC = NOC;

		}

		void disp() {
		
			std::cout << "Total Companies: " << NOC << std::endl;

		}

		int getNOC() {
		
			return NOC;
		}

		/*friend void operator+(placements& ref,int x ) {
		
			ref.NOC = ref.NOC + x;

		} */

	       /*	void operator+(int x) {
		
			this-> NOC = NOC + x;

		} */

};

placements operator+(placements& ref, int x) {

	return placements(ref.getNOC() + x); 
}

int main() {

	placements obj1(5);
	obj1.disp();          // 5
        
	obj1 = obj1 + 1;                          // operator+(placements,int)
	obj1.disp();        // 6

	return 0;

}
