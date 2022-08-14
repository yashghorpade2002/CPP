
# include <iostream>

class audi {

	private:
		int A ;
		int Q ;

	public:
		/*audi(int A, int Q) {
		
			this-> A = A;
			this-> Q = Q;

		}*/

		friend std::istream& operator>>(std::istream& in, audi& ref) {
                        
			std::cout << "Enter no of A class Cars : ";
			in >> ref.A ;

			std::cout << "Enter no of Q class cars : ";
			in >> ref.Q ;

			return in;
		}

		friend std::ostream& operator<<(std::ostream& out, audi& ref) {
		
			out << ref.A << std::endl;
			out << ref.Q << std::endl;

			return out;
		}
              

};

int main() {

	audi obj;

	std::cin >> obj;
	std::cout << obj;
	return 0;

}
