# include <iostream>
# include <map>
int main() {
	std::map<std::string, std::string> phonedir;
	int n;
	std::cin >> n;

	for(int i=0; i<n; i++) {
	
		std::string name;
		std::string phone;
		std::cin >> name;
		std::cin >> phone;
		phonedir[name] = phone;
	}

	std::map<std::string, std::string>::iterator itr;
	std::string querry;
	while (std::cin >> querry) {
	
		itr = phonedir.find(querry);

		if(itr != phonedir.end()) {
		
			std::cout << itr->first << "=" << itr->second << "\n";
		} else {
		
			std::cout << "Not found" << "\n";
		}
	}

	return 0;
}
