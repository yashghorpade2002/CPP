
/*new and delete operator overloading 
we are going to overload the operators like new and delete. When we create and object using new operator and pointer concept then  the object which is created gets its space or we can say the memory on heap section and also the memory allocation is done at run  time only.
The new operator by default creates its own function if we do not write then using malloc and the delete also the same using free
*/

// CODE 

# include <iostream>

class OlympicGold {

	private:
		int golds;
		std::string Name;

	public:
		OlympicGold(std::string Name, int golds) {
		
			std::cout << "In Constructor" << std::endl;
			this-> Name = Name;
			this-> golds = golds;

		}

		~OlympicGold() {

                        std::cout << "In Destructor" << std::endl;


                }

		void disp() {
		
			std::cout << Name << ":" << golds << std::endl;

		}

                static void* operator new(std::size_t osize) {

                         std::cout << "My operator new" << std::endl;
                         void *p = malloc(osize);
			 
			 // My operator new
			 // the below and above are the variants which you can access

			 void *p = ::operator new(osize);

			 // Global operator new


			 //std::cout << this->OlympicGolds << std::endl;       
			 // internally the new operator goes static so we cannot access any private members of class. 
			 // As well as it will not give you error if you do not make it static.
                         
			 return p;

               }

                void operator delete(void *ptr) {

                        std::cout << "My operator delete" << std::endl;
                        free(ptr);

               }


};

void* operator new(std::size_t osize) {

	std::cout << "My Global operator new" << std::endl;
	void *p = malloc(osize);
	return p;

}

void operator delete(void *ptr) {

        std::cout << "My Global operator delete" << std::endl;
        free(ptr);

}


int main() {

	OlympicGold *obj1 = new OlympicGold("India",1);
	obj1->disp();
        
      	delete obj1;
	return 0;
}








