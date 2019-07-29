#include <iostream>
using namespace std;

int main()
{
    int *fibo,a=1,b=1,c,x,i=2,j=0;
    bool ara = false;
    setlocale(LC_ALL,"Turkish");
    
    cout<<"Aranan sayı: ";
    cin>>x;
    
    fibo = new int[10];
    
    fibo[0]=a;
    fibo[1]=b;
    
    cout<<endl
    <<"fibonacci [ 10 ] = { "<<a
    <<", "<<b<<", ";
    
    while (i<10)
    {
        c=a+b;
        a=b;
        b=c;
        fibo[i]=c;
        cout<<fibo[i]<<", ";
        i++;
    }cout<<"}";
    
    while (j<10)
    {
        if (x == fibo[j])
        {
            cout
            <<endl
            <<endl
            <<"Aranan "
            <<x<<
              " sayısı, "
            <<j+1<<
              ". sıradadır.\n";
            cout
            <<endl
            <<"fibonacci [ "
            <<j+1
            <<" ] = { "
            <<x
            <<" }\n\n";
            
            ara = true;
            break;
        }
        j++;
    }
    
    if (ara != true)
        cout<<endl<<endl<<
        x<<",fibonacci değil.\n\n";
        
    return 0;
}