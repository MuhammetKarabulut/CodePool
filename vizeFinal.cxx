#include <iostream>
using namespace std;

int main()
{
   int vize,final,vizeNot,finalNot,puan;
   char e;
   head:
   cout<<"Vize sınav notu: ";
   cin>>vizeNot;
   cout<<"Final sınav notunuzu biliyorsanız girin,"
"\n\nBilmiyorsanız lütfen 0 girin: ";
   cin>>finalNot;
   
   if ( finalNot == 0 )
   {
       vize = (vizeNot * 20/100);
       
       final = 65 - vize;
       
       finalNot = final * 100/80;
       
       cout<<endl<<"vize katkısı:"<<vize
       <<endl<<"Finalde en az almanız gereken"
         " puan : "<<finalNot;
           
   }
   else
   {
       puan=vizeNot/5+(finalNot*8/10);
       if (puan >= 65)
           cout
           <<puan<<" ile Geçtiniz..";
           else
           cout
           <<puan<<"ile Kaldınız..";
   }
   cout<<endl;
   cout<<"Devam icin 'e' yazin:";
   cin>>e;
   if (e == 'e')
       goto head;
   else
       return 0;
}