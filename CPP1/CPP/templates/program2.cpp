# include <iostream>

class Employee {

	public:
		double sal;
		Employee(double sal) {
		
			this-> sal = sal;

		}

		template <typename T>
			T max (T x, T y) {
			
				if(x.sal > y.sal)
					return x;
				else
					return y;

			}

		/*friend bool operator>(Employee &ref1, Employee &ref2) {
		
			return ref1.sal > ref2.sal;

		}*/

		/*friend std::ostream& operator<<(std::ostream & out,Employee ref) {
		
			out << ref.sal << std::endl;
			return out;
		}*/
};

int main () {

	Employee Ashish(100000);
	Employee Akash(200000);

	Employee maxsal = Ashish.max(Ashish, Akash);

	std::cout << maxsal.sal << std::endl;
	
	return 0;

}
