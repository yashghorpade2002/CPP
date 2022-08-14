# include <iostream>
# include <fstream>

int main() {
	
	std::ifstream infile("Founders1.txt");

	std::string Readfile;

	while(infile) {
	
		getline(infile,Readfile);
		std::cout << Readfile << std::endl;

	}

	return 0;
}
