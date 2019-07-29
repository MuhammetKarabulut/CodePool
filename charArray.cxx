#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n=1000,say=0;
    char karakter[n];
    
    cout<<"birseyler yazin:";
    cin>>karakter;
    
    //n = strlen(karakter); veyaaaa...
    
    for (int i=0;i<1000;i++)
    {
        if (karakter[i]== NULL)
            break;
        say++;
    }
    n=say;
    
    cout<<endl<<"Yaziniz, "<< n
    <<" karakter boyutunda"<<endl<<endl;
    
    for (int i=0;i<n;i++)
    {
        cout<<i+1
        <<".harf->  "
        <<karakter[i]
        <<"\n";
    }
}