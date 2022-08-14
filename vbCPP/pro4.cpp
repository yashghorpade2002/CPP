# include <iostream>

class Base1 {

    protected:
       
       float b1;
       
    public:
       
       void get();
       
};

void Base1::get() {

   std::cout<<"Enter the value for b1: ";
   std::cin>>b1;
   
}

class Base2 {

    protected:
    
       float b2;
       
    public:
    
       void get();

};

void Base2::get() {

    std::cout<<"Enter the value for b2: ";
    std::cin>>b2;
    
}

class Derived:public Base1, public Base2 {

    private:
      
       float d;
       
    public:
       
       void get();
       void put();
       
};

void Derived::get() {

   std::cout<<"Enter the value of d: ";
   std::cin>>d;
   
}

void Derived::put() {

    std::cout<<"The values of b1, b2, and d are: "<<b1<<" "<<b2<<" "<<d<<" "<<std::endl;
    
}

int main () {

   Derived obj1;
   obj1.Base1::get();
   obj1.Base2::get();
   obj1.get();
   obj1.put();


    return 0;
}








