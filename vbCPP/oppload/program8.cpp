
// to display the representation of com plex number

# include <iostream>

class Complex {

	private:
		int real;
		int imag;

	public:

		friend std::istream& operator>>(std::istream& in, Complex& ref) {
		
			std::cout << "Enter real part : ";
			in >> ref.real;

			std::cout << "Enter imaginary part : ";
			in >> ref.imag;

			return in;

		} 

		friend std::ostream& operator<<(std::ostream& out, Complex& ref) {
		
			out << ref.real;
			out << "+i" << ref.imag << std::endl;

			return out;
		}
};

int main() {

	Complex obj;

	std::cin >> obj;
	
	std::cout << "The representstion of complx number is : ";
	
	std::cout << obj;

	return 0;

}
