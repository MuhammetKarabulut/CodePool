#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    float a=0,n,toplam=0;
    int say=0;
    
    cout<<"Kaça kadar?: ";
    cin>>n;
    for (;a<=n;a+=0.5)
    {
        say++;
        cout<<a;
        toplam+=a;
        if (a==n){
            cout<<" = ";
        }
        else
        {
        cout<<" + ";
        }  
    }
    cout<<say<<" adet sayı Toplamı = "<<toplam;
}