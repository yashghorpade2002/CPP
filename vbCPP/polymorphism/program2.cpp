/*
 If the function name is same then 
    1] The number of parameters must be different
    2] The type of parameters must be different
    3] The sequence also matters the most:
              a] int float
              b] float int
             

	      the return type dosent matters 
 */

# include <iostream>

class parent{

	public:
		void fun(int x,float y) {
		
			std::cout << "int - float" << std::endl;

		}

		void fun(float x,int y) {
		
			std::cout << "float - int" << std::endl;

		}
};
int main() {

	parent obj;
	obj.fun(10,10.5f);
        obj.fun(10.5f,10);

	return 0;

}
