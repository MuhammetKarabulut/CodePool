
#include <iostream>  

using namespace std;  

class Account {  

   public:  

       int accno;      

       string name;   

       static int count;     

       Account(int a, string n)   

        {    

            this->accno = a;    

            this->name = n;    

            count++;  

        }    

       void display()    

        {    

            cout<<accno<<" "      
            <<name<<endl;   

        }    

};  

int Account::count=0;  //dikkat!

int main(void) {  

    Account a1 = Account(201, "Sanjay"); 

    Account a2 = Account(202, "Nakul");   

    Account a3 = Account(203, "Ranjna");  

    a1.display();    

    a2.display();    

    a3.display();    

    cout<<"Total Objects are:"
    <<Account::count;  //**** :: ****//

    return 0;  

}  