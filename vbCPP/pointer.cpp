# include <iostream>
class cl{

       private:
               
            int age;
            
       public:
          
            void get();
            void put();
            cl calc(cl);

};

void cl::put() {

    std::cout<<"Maximam age is: "<< age<<std::endl;
    
}

void cl::get() {

    std::cout<<"Enter the age: ";
    std::cin>> age;


}

cl cl::calc(cl o) {

   if(age < o.age)
       return o;
   else 
       return *this;
}


int main() {

      cl obj1;
      cl obj2;
      cl obj3;
      
      obj1.get();
      obj2.get();

      obj3 = obj1.calc(obj2);
      obj3.put();






    return 0;
}
