#include <iostream>
#include <string>

using namespace std;

int main(){
setlocale(LC_ALL, "Turkish");   
head:
cout<<"Kaçtan başlasın?: "<<endl;
int ilk;
cin>>ilk;
cout<<"Kaça kadar sayılsın: "<<endl;
int son,toplam=0;
cin>>son;
cout<<"Kaçar kaçar sayılsın?: "<<endl;
int n;
cin>>n;

for (int i=ilk+1;i<son;i+=n){
    toplam+=i;
    cout<<i<<", ";
}
cout<<endl<<"\n\tSayıların Toplamı = "<<toplam<<endl;
cout<<"for continue press everyone or write 'x' for exit"<<endl;
string out;
cin>>out;
            if (out == "x"){
                return 0;
            }
            else{
                goto head;
            }
}// main end