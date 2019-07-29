#include <string>
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Turkish");
    head:
    int i,j,sayi,say=0,toplam=0,sayac=0;

    
    cout<<"Girilecek sayiya kadar olan tum asal sayilari ekrana yazdiran program"<<endl;

    cout<<"Bir sayi giriniz : ";     
    cin>>sayi;

    cout<<endl;

    for (int i=2;i<=sayi;i++)
    {
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                sayac+=1;
            }
        }

        if (sayac==2)
        {
           say+=1;                                  cout<<
           say<<". asal sayı = "<<                  i<<endl;
           toplam+=i;
                                   
         }  
         sayac=0;
    }
    cout<<say<<" adet asal sayı toplamı =  "<<toplam<<endl;
    goto head;
    
    return 0;
    }