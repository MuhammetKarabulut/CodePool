#include <iostream>

using namespace std;

void toplama(int a, int b){
    cout<<a+b;
}
int cikarma(int a,int b){
    return a-b;
}

int main()
{
    int a;
    int b;
    cout<<"a sayısını gir :"<<endl;
    cin>>a;
    cout<<"b sayısını gir :"<<endl;
    cin>>b;
    
    toplama(a,b);
    int cikar = cikarma(a,b);
    cout<<endl<<cikar;
}