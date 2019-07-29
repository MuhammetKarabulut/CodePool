#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
     int basla,bitir,x,adet=0,topla=0;
     cout<<"Kaçtan başlasın?: "<<endl;
     cin>>basla;
     cout<<"Kaça kadar sayalım?: "<<endl;
     cin>>bitir;
      cout<<"Hangi sayıya bölünenleri toplayalım?: "<<endl;
     cin>>x;
     cout<<"—————————"<<endl;
      
      for (int i = basla+1; i < bitir; i++)
      {
        if (i % x == 0)
        {
            topla+=i;
            
            adet++;
            
            cout <<adet<<" .sayı :"<< i <<", + "<<endl;
            
        }
    }
    cout<<"----------------------------"<<endl;
    cout<<adet<<" adet sayının toplamı: "<<topla<<endl<<endl;
 
    system("pause");
    return 0;
}
 