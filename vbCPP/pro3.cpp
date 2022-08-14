# include <iostream>

class StaticDemo {

      public:
         
          static int x;
      




};

int StaticDemo::x=20;

int main() {

     StaticDemo obj1;
     StaticDemo obj2;
     StaticDemo obj3;
     StaticDemo obj4;
     
     std::cout<<obj1.x<<std::endl;
     std::cout<<obj2.x<<std::endl;
     std::cout<<obj3.x<<std::endl;
     std::cout<<obj4.x<<std::endl;
     
     obj1.x=30;
     
     std::cout<<obj1.x<<std::endl;
     std::cout<<obj2.x<<std::endl;
     std::cout<<obj3.x<<std::endl;
     std::cout<<obj4.x<<std::endl;
     




   return 0;
}
