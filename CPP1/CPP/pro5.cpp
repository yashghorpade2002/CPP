// VIRTUAL CLASSES
// HYBRID INHERITANCE

# include <iostream>

class grandparent {

   protected:
      float a;
   public:
       grandparent();


};

grandparent::grandparent() {

    std::cout<<"Enter the value of grandparent a: ";
    std::cin>>a;


}

class parent1:virtual public grandparent{

      protected:
          float b;
      public:
          parent1();

};

parent1::parent1() {

     std::cout<<"Enter the value for parent1 b: ";
     std::cin>>b;

}

class parent2:virtual public grandparent {

     protected:
        float c;
        
     public:
        parent2();

};

parent2::parent2() {

   std::cout<<"Enter the value for parent2.c: ";
   std::cin>>c;


}

class child: public parent2, public parent1 {

   private:
       float d;
   public:
       child();
       void disp();


};

child::child() {

     std::cout<<"Enter the value for child d: ";
     std::cin>>d;
}

void child::disp() {

     std::cout<<"grandparant.a: "<<parent1::a<<std::endl;
     std::cout<<"grandparant.a: "<<parent2::a<<std::endl;
     std::cout<<"parent1.b: "<< b <<std::endl;
     std::cout<<"parent2.c: "<< c <<std::endl;
     std::cout<<"child.d: "<< d <<std::endl;



}

int main() {
      
      child obj1;
      
      obj1.disp();
      
      
    return 0;
}


