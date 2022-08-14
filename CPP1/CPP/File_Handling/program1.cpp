# include <iostream>
# include <fstream>

int main() {

	std::ofstream outfile("core2web.txt");

	outfile << "CPP and DS batch";
	outfile.close();

	return 0;
}
