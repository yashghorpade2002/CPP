# include <iostream>

class Rectangle{

   private:
       int width;
       int length;
       
   public:
       Rectangle(int w,int l) {
       
        width = w;
        length = l;
      
       }

int Area() {

   return width*length;
  
}


};

int main () {

   int Wth;
   int Lth;
   
   std::cout<<"Enter the width of rectangle: ";
   std::cin>>Wth;
   
   std::cout<<"Enter the length of rectangle: ";
   std::cin>>Lth;
   
   std::cout<<" "<<std::endl;

  Rectangle rect(Wth,Lth);
   std::cout<<"The area of rectangle is: "<<rect.Area() <<std::endl;

return 0 ;



}
