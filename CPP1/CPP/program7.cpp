# include <iostream>

class Roaming {
 
	private:
		int Peoplecount;

	public:
		Roaming(int FamPeoplecount) {
		  
			Peoplecount = FamPeoplecount;

		}

		void display();

		friend void FamPeople(Roaming &ref);

};

void Roaming::display() {
 
	std::cout << Peoplecount << std::endl;

}

void FamPeople(Roaming &ref) {
 
        ref.Peoplecount += 3;
	std::cout << ref.Peoplecount << std::endl;

}

int main () {
 
	Roaming obj(5);
	obj.display();
	FamPeople(obj);

 return 0;
}
