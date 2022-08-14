# include <iostream>
# include <vector>
class person {

	protected:
		std::string firstName;
		std::string lastName;
		int id;
	public:
		person(std::string firstName, std::string lastName, int identification) {
		
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;

		}
		void printperson() {
		
			std::cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";

		}

};
class Student : public person {

	private:
		std::vector<int> testScores;
	public:
		Student(std::string firstName, std::string lastName, int id, std::vector<int> scores) : person(firstName, lastName, id) {
		
			this->testScores = scores;
		}
		char calculate() {
		
			int total = 0;

			for(int i=0; i<this->testScores.size(); i++) {
			
				total += this->testScores[i];

			}
			int avg = (int) (total / testScores.size());
			if(avg >= 90 && avg <=100){
				return 'O';
			}
			if(avg >= 80 && avg <=90){
				return 'E';
			}
			if(avg >= 70 && avg <=80){
				return 'A';
			}
			if(avg >= 55 && avg <=70){
				return 'P';
			}
			if(avg >= 40 && avg <=55){
				return 'D';
			}
			return 'T';
		}
};
int main() {
	
	std::string firstName;
	std::string lastName;
	int id;
	int numScores;
	std::cin >> firstName >> lastName >> id >> numScores;
	std::vector<int> scores;

	for(int i=0; i<numScores; i++) {
	
		int tmpScore;
		std::cin >> tmpScore;
		scores.push_back(tmpScore);

	}
	Student* ptr = new Student(firstName, lastName, id, scores);
	ptr->printperson();
	std::cout << "Grade: " << ptr->calculate() << "\n";

	return 0;
}
