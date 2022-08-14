# include <iostream>
# include <fstream>

int main() {

	std::ifstream infile;
	std::string readData;

	infile.open("Founders1.txt");

	while(infile.eof() == 0) {
	
		getline(infile,readData);
		std::cout << readData << std::endl;
	}
	infile.close();

	infile.open("companies.txt");
	while(infile.eof() == 0) {
	
		getline(infile,readData);
		std::cout << readData << std::endl;
	}
	infile.close();

	return 0;
}
