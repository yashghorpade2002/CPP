/*
Write a C++ program that creates an output file, writes information to it, closes the file and
open it again as an input file and read the information from the file.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    char Name[20];
    int ID;
    double salary;
    public:
        void accept()
        {
            cout<<"\n Enter Name: ";
            cin>>Name;
            cout<<"\n Enter ID: ";
            cin>>ID;
            cout<<"\n Enter Salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"\n Name:"<<Name;
            cout<<"\n Id:"<<ID;
            cout<<"\n Salary:"<<salary;
            cout<<"\n";
        }
};
       
int main()
{
   
    Employee input;
    fstream f;
    int i,n;
   
    // open file in append mode 
    f.open("abc.txt", ios::app);

    cout<<"\n How many employee information do you need to store?";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"\n Enter information of:"<<i+1<<" employee \n";
        input.accept();
        // write input employee object to file
        f.write((char*)&input, sizeof(input));
    }
   
   // close file
    f.close();
   
   // open file in read mode
    f.open("abc.txt",ios::in);

    cout<<"\n---- Employee Information ------------";
    for(i=0;i<n;i++)    {
        cout<<"\n----";
        Employee e;
        // read employee object from file
        f.read((char*)&e, sizeof(e));
        e.display();
     }
      
     // close file 
    f.close();
    return 0;
}

