#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int a=1,n,toplam=0;
    
    cout<<"Kaça kadar?: ";
    cin>>n;
    for (;a<n;a++)
    {
        float b=a+0.5;
        cout<<a;
        cout<<" + ";
        cout<<b;
        toplam+=(a+b);
        if (a==n-1){
            cout<<" = ";
        }
        else
        {
        cout<<" + ";
        }  
    }
    cout<<n<<" adet sayı Toplamı = "<<toplam;
}