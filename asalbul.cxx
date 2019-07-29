#include <iostream> 
using namespace std;


void asalbul(int sayi)
{ 
    int x,*dizi,n,say=0,toplam=0;
    dizi=new int(n);

    for (int i=2;i<=sayi;i++)
    {
        x=1;
        for (int j=2;j<i;j++)
        {
           if (i % j == 0)
           {
               x=0; break;
           }
        }
        if (x == 1)
        {
            toplam+=i;
            dizi[say]=i;
            say++;
            cout<<say
            <<".asal sayi= "<<
            dizi[say-1]<<endl;
            
        }
    }
    n=say;
    cout<<
    endl<<"asalSayilar["<<n<<"] = { ";
    for (int a=0; a<n; a++)
    {
        cout<<dizi[a]<<",";
    }
    cout<<"}";
    cout<<
    endl<<sayi
    <<" sayisina kadar tüm \n\nasal"           "sayilarin toplami = "<<toplam;
        
}    

int main(){
    
  int sayi;
  char eh; 
  head: 
    cout<<endl<<"bir sayi girin:";
    cin>>sayi;
    
    asalbul(sayi);
    
    
    cout 
    <<endl<<endl
    <<"devam edelim mi? (e/h) : ";
    cin>>eh;
    if (eh == 'e')
        goto head;
    else if (eh == 'h')
        return 0;
    else{
        cout<<
        endl<<"yanlis giris yapildi"
              "tekrar deneyiniz :";
        goto head;
    }
        
}
    