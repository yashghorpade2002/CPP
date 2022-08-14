
# include <iostream>
class c2w {

	private:
		int teachers;
		int langs;

	public:
		c2w(int teachers, int langs) {
		
			this-> teachers = teachers;
			this-> langs = langs;
		}

		int getteachers() {
		
			return teachers;

		}

		int getlangs() {
		
			return langs;

		}

		void disp() {
		
			std::cout << "Total Teachers: " << teachers << std::endl;
			std::cout << "Total Languages: " << langs << std::endl;

		}
                
	       	/*friend void operator+(c2w& ref, int x) {
		
			ref.teachers = ref.teachers + x;
			ref.langs = ref.langs + x;

		}*/

	        /*void operator+(int x) {
		
			this-> teachers = teachers + x;
			this-> langs = langs + x;

		}*/

};

c2w operator+(c2w& ref,int x) {

	return c2w(ref.getteachers() + x, ref.getlangs() + x);

}

int main () {

	c2w obj1(4,5);
	obj1.disp();
        
	obj1 = obj1 + 1;
	obj1.disp();
	return 0;

}
