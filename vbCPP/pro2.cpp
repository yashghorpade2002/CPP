# include <iostream>
class Database {

   private:
       
        std::string Name;
        char Div;
        int Rollno;
        std::string Dist;
        std::string Stream;
        
   public:
           
          Database() {
          
              std::cout<<"student Database"<<std::endl;
              
          }
          
          Database(std::string Name, char Div,int Rollno, std::string Dist, std::string Stream) {
          
                this-> Name = Name;
                this-> Div = Div;
                this-> Rollno = Rollno;
                this-> Dist = Dist;
                this-> Stream = Stream;
                
           
          }
          
          void disp () {
          
               std::cout<<"The Name of student is: "<<Name<<std::endl;
               
               std::cout<<"The Div of student is: "<<Div<<std::endl;
               
               std::cout<<"The roll no of student is: "<<Rollno<<std::endl;
               
               std::cout<<"The Dist where student stays: "<<Dist<<std::endl;
               
               std::cout<<"The Steram of Student is: "<<Stream<<std::endl;
               
          }




};

int main () {

      char Agree = 'y';

       do{ std::string Name;
        char Div;
        int Rollno;
        std::string Dist;
        std::string Stream;


     std::cout<<"Enter the name of student: ";
     std::cin>>Name;
     
     std::cout<<"Enter the Div of student: ";
     std::cin>>Div;
     
     std::cout<<"Enter the roll no of student: ";
     std::cin>>Rollno;
     
     std::cout<<"Enter the dist where student stays: ";
     std::cin>>Dist;
     
     std::cout<<"Enter the stream of the student: ";
     std::cin>>Stream;
     
     std::cout<<" "<<std::endl;
     
   Database obj1;
   Database obj2(Name,Div,Rollno,Dist,Stream);
   obj2.disp();
   
   std::cout<<"Do you want to continue(y/n): ";
   std::cin>>Agree;
   
    std::cout<<" "<<std::endl;
   }while(Agree == 'y' || Agree == 'Y');
    std::cout<<" "<<std::endl;



  return 0;
}
