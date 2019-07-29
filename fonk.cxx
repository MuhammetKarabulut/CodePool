#include <iostream>


using namespace std;

void toplama(int a, int b){
    cout<<"\nToplam = "<<a+b;
}
int cikarma(int x,int y){
    return x-y;
}

int main()
{
    int a;
    int b;
    cout<<"a sayısını gir :";
    cin>>a;
    cout<<"\nb sayısını gir :";
    cin>>b;
    cout<<endl<<endl;
    toplama(a,b);
    cout<<endl
    <<"\nFark = "<<cikarma(a,b);
    cout<<endl;
    
}
