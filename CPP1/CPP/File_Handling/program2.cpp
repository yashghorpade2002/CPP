# include <iostream>
# include <fstream>

int main() {
	
	std::ofstream outfile("founder");
	std::string inputdata;

	std::cout << "Enter string" << std::endl;
	std::cin >> inputdata;
	outfile << inputdata;

	outfile.close();
	return 0;
}
