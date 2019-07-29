#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    srand(time(NULL));
    int sayi,fark,girilen;
    
    sayi = rand() % 100;
    cout<<"1-100 arası sayı girin:"<<endl;
    do
    {
        
        cin>>girilen;
        
        if (girilen>sayi){
            fark=girilen-sayi;
            cout<<"in biraz"<<endl;
                if (fark>5)
                    cout<<"çok soğuk"<<endl;
        }
        else if (sayi>girilen)
            cout<<"çık biraz"<<endl;
        else
            cout<<"\nbuldunuz.."<<endl;
        
    }
    while (girilen != sayi);
     cout<<"\n\ttebrikler kazandınız sayımız: "<<girilen<<endl;
     cout << "sayımız : "<<sayi;
    system("pause");
    return 0;
}
 