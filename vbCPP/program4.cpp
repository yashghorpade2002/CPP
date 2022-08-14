
# include <iostream>

class FriendAccess{
 
	private:
		int mobAccess;
	public:
		FriendAccess(int myAccess) {
		 
			mobAccess = myAccess;

		}

		void myAccess();

		friend void friendAccess (FriendAccess &ref);   // We have to pass our class as parameter to friend function


};

void FriendAccess::myAccess() {
 
	std::cout<<mobAccess<<std::endl;

}

void friendAccess(FriendAccess &ref){
 
	ref.mobAccess += 3;
	std::cout<<ref.mobAccess<<std::endl;
}

int main() {
 
	 FriendAccess obj(5);
	 obj.myAccess();
	 friendAccess(obj);


 return 0;
}
