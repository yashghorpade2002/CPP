
// insertion and extraction oppload 

# include <iostream>

class core2web {

	private:
		int langs;
		int noofteachers;

	public:
		core2web(int langs, int noofteachers) {
		
			this-> langs = langs;
			this-> noofteachers = noofteachers;

		}

		int getlangs() {
		
			return langs;
		}

		int getteachers() {
		
			return noofteachers;
		}

		/*friend std::ostream& operator<<(std::ostream& out, core2web& c2w) {
		
			out << c2w.langs << std::endl;                    // std::cout << c2w.langs << std::endl;
			out << c2w.noofteachers << std::endl;             // std::cout << c2w.noofteacers << std::endl;

			return out;
			
		}*/

};

std::ostream& operator<<(std::ostream& out, core2web& c2w) {

	out << c2w.getlangs() << std::endl;
	out << c2w.getteachers() << std::endl;

	return out;
}

int main() {

	core2web y2022(6,3);
	std::cout << y2022 ;

	return 0;

}
