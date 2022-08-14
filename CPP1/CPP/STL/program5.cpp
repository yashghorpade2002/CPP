// LIST
# include <iostream>
# include <list>

void Showlist(std::list <std::string> lst) {

	for(auto itr = lst.begin(); itr != lst.end(); itr++) {
	
		std::cout << *itr << std::endl;
	}
}

int main() {
	
	std::list <std::string> l1 = {"Apple", "Amazon", "Microsoft", "Google", "Facebook"};
	Showlist(l1);
	std::cout << "====================" << std::endl;

	l1.push_back("Uber");
	Showlist(l1);
	std::cout << "====================" << std::endl;
	
	l1.push_front("Adobe");
	Showlist(l1);
	std::cout << "====================" << std::endl;
	
	l1.pop_back();
	l1.pop_front();
	Showlist(l1);
	std::cout << "====================" << std::endl;

	std::cout << l1.front() << std::endl;
	std::cout << l1.back() << std::endl;
	std::cout << "====================" << std::endl;

	l1.insert(l1.begin(),"Adobe");
	Showlist(l1);
	std::cout << "====================" << std::endl;
	
	l1.erase(l1.begin());
	Showlist(l1);
	std::cout << "====================" << std::endl;

	l1.reverse();
	Showlist(l1);
	std::cout << "====================" << std::endl;
	
	l1.sort();
	Showlist(l1);
	std::cout << "====================" << std::endl;
	
	std::list <std::string> l2 = {"10", "20", "30", "40", "50"};
	Showlist(l2);
	std::cout << "====================" << std::endl;
	
	l1.merge(l2);
	Showlist(l1);
	std::cout << "====================" << std::endl;
	
	l2.merge(l1);
	Showlist(l2);
	std::cout << "====================" << std::endl;
	
	return 0;
}
