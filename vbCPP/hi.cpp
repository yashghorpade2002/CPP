# include <iostream>
class online{
 private:
     std::string Founder;
     std::string Name;
     int ern;
     
  public:
      online() { 
      
            std::cout<<"top online classes"<<std::endl;
            
      }
      online(std::string Founder, std::string Name, int ern) {
           
           this-> Founder = Founder;
           this-> Name = Name;
           this-> ern = ern;
           
         
      }
      
      void disp() {
       
        std::cout<<"The name of founder is: "<<Founder<<std::endl;
        
        std::cout<<"The name of institute is: "<<Name<<std::endl;
        
        std::cout<<"The total earning of company is: "<<ern<<std::endl;
      
       
      }





};

int main() {

      online obj1;
      online obj2("Roman Saini","unacademy",123456789);
      obj2.disp();
      


return 0;
}
