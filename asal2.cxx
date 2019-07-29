#include <iostream>
#include <string>

using namespace std;

int main(){
setlocale(LC_ALL, "Turkish");   
head:
cout<<"Sayı gir:"<<endl;
int sayi ;
cin>>sayi;
for (int i = 2; i <= sayi; i++)
            {
                int kalan = sayi % i;
                if (kalan == 0)
                {
                   cout<<"\n\tSayı asal değildir\n"<<endl;
                    break;
                }//if end
                if (i == sayi - 1)
                {
                    cout<<"\n\tSayı asaldir\n"<<endl;
                    break;
                }//if end
            }// for end
            cout<<"Write to console '-1' for OUT..."<<endl;
            if (sayi == -1){
                return 0;
            }
            goto head;
}// main end