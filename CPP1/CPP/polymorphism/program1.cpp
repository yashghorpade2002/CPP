/* POLYMORPHISM
        A] Compile time polymorphism // Early binding
	B] Run time polymorphism     // late binding

  A] Compile time
        1] Function overloading   // Requires same class 
	2] operator overloading   // Requires same class
 
  B] Run time
        1] Function overriding / Virtual function       // Parent child relation is necessary i.e inheritance must be there

*/

# include <iostream>

void sum(int x,int y) {

	printf("%d\n",x+y);

}
void sum(int x, int y, int z) {

	printf("%d\n",x+y+z);

}
int main() {
                              // In C programing language it gives you and error that is it do not support same functions
	sum(10,15);          // Name mangling concept comes inpicture i.e internally
	sum(10,15,20);      // sum2i, sum3i goes to compiler and the difference is identified by the compiler it self

	return 0;

}

