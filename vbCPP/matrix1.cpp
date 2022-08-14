# include <iostream>

class Complex {

	float real = 0;
	float imag = 0;

public:
	Complex() {
	

	}

	Complex(int r, int i) {
	
		this-> real = r;
		this-> imag = i;

	}

	void get() {
	
		std::cout << "Enter real part of complex number: " ;
		std::cin >> real;

		std::cout << "Enter imaginary part of complex number: " ;
		std::cin >> imag;

	}

	void disp() {
	
		std::cout << real;

		if(imag>0) {
		
			std::cout << "+" << imag << "i" << std::endl;

		} else {
		
			std::cout << imag << "i" << std::endl;

		}


	}

	void multiply(Complex X, Complex Y) {
	
		
		//  logic (a+bi)*(c+di) = (ac+adi)+(cbi+bdi^2) = ac-bd + (ad+cb)i   //i^2=-1
		
		int prod1 = X.real * Y.real;
		
		int prod2 = X.imag * Y.imag;

		real = prod1 - prod2;

		int prod3 = X.real * Y.imag;

		int prod4 = X.imag * Y.real;

		imag = prod3 + prod4;

	}

	void divide(Complex X, Complex Y) {
	
	       /*
		a+bi/c+di = (a+bi/c+di)*(c-di/c-di)
		        = {(a+bi)*(c-di)} / {(c+di)*(c-di)}
		        = {(ac-adi)+(cbi-bdi^2)} / {c^2 - d^2i^2} 
			= {(ac+bd)+(cb-ad)i} / {c^2 + d^2}
			= {(ac+bd)/(c^2+d^2)} + {(cb-ad)/(c^2+d^2)}

			*/

		int add = (X.real * Y.real) + (X.imag * Y.imag) ;
	        int sub = (Y.real * X.imag) + (X.real * Y.imag) ;
                int sqadd = (Y.real * Y.real) + (Y.imag * Y.imag) ;

		real = add/sqadd;
		imag = sub/sqadd;

	}
};

int main() {

	Complex obj1;
	obj1.get();

	std::cout << "First complex number is: ";
	obj1.disp();

        float x,y;
	std::cout << "Enter real part of complex number: ";
	std::cin >> x;
	std::cout << "Enter imaginary part of complex number: ";
	std::cin >> y;
	Complex obj2(x,y);
	
	std::cout << "Second complex number is: ";
	obj2.disp();

	Complex obj3;
	std::cout << "Multiplication of complex number is: ";
	obj3.multiply(obj1,obj2);
	obj3.disp();

	Complex obj4;
	std::cout << "Division of complex number is: ";
	obj4.divide(obj1,obj2);
	obj4.disp();


	return 0;

}
