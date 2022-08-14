//passing a class as parameter to a class
# include <iostream>
# include <vector>

class Employee {

	private:
		int empId;
		std::string empName;

	public:
		Employee(int empId, std::string empName) {
		
			this-> empId = empId;
			this-> empName = empName;

		}

		void info() {
		
			std::cout << empId << " : " << empName << std::endl;

		}

};

int main() {

	std::vector <Employee> v;

	Employee obj1(11,"Rahul");
	Employee obj2(12,"Saurabh");
	Employee obj3(13,"Nilesh");
	Employee obj4(14,"Rushikesh");

	v.push_back(obj1);
	v.push_back(obj2);
	v.push_back(obj3);
	v.push_back(obj4);

	for(int i=0; i<v.size(); i++) {
	
		v[i].info();
	}
	return 0;

}
