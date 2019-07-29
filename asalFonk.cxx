#include <iostream>

using namespace std;

int asalbul(int sayi);    

int main(){
    a:
    int sayi;
    char dq;
    
    cout<<endl<<"Bir sayi girin:";
    cin>>sayi;
    
    if (asalbul(sayi)==1)
        cout<<sayi<<" asaldir";
        else
        cout<<sayi<<" asal degil";
    
    
     
    b:
    
    cout<<endl<<"Devam icin 'd', Cikmak icin 'q': ";
    cin>>dq;
    
    if (dq == 'd')
        goto a;
    else if (dq == 'q')
        return 0;
    else
    {  
        cout<<endl<<endl<<"*Yanlis giris yapildi, Tekrar deneyiniz*"<<endl;
        goto b;
    }
}




int asalbul(int sayi)
{ 
    int i=0, k=0,x=0,t=0;
       
    for (;i<=sayi;i++)
    {
      
      for (int j=1;j<=i;j++)
      {
            if (i%j==0) 
            {     
              x++;
            }       
      }
     
      if (x==2)
      {
         k++; 
         cout<<k<<".asal sayi:"<<i<<","<<endl;
      } 
      
      if (x!=2)
      {
        t++;  cout<<"\t\t\t"<<t<<".degil:"<<i<<","<<endl;      }
    x=0;
      
    }
    
        
    return k; 
}    