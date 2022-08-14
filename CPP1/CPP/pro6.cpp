
# include <iostream>

class Demo{

         public:

	   Demo() {
	   
	        std::cout<<"In Constructor"<<std::endl;

	   }

	   ~Demo() {
	   
	       std::cout<<"In Destructor"<<std::endl;
	   }







};

int main() {

         Demo obj1;

	Demo *obj2 = new Demo();
       
	delete obj2;


    return 0;
}
