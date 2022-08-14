# include <iostream>

int main() {

	int first_term = 0;
	int second_term = 1;
	int temp;

	std::cout << first_term << " " << second_term << " ";
	
	for(int i = 1; i <= 10; i++) {
	
		temp = second_term;
		second_term = second_term + first_term;
	 	first_term = temp;

		std::cout << second_term << " ";
	}
	std::cout << " " << std::endl;
	
	return 0;
}
