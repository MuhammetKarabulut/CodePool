#include <iostream>  

using namespace std;  

class Account {  

   public:  

       int accno;

       string name; 

       static float rateOfInterest;   

       Account(int accno, string name)   

        {    

             this->accno = accno;    

            this->name = name;    

        }    

       void display()    

        {    

            cout<<accno<< " "<<
            name<< " "

            <<rateOfInterest<<endl;   

        }    

};  

float Account::rateOfInterest=6.5;  

int main(void) {  

    Account a1 =Account(201, "Sanjay");    

    Account a2=Account(202, "Nakul"); 

    a1.display();    

    a2.display(); 
    return 0;    

}  