#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;
// pointer kullanmadan toplama islemi
// yapalim digerlerinde ise kullanalim
// arada herhangi bir fark yok gorelim..

int toplama(int x,int y,int toplam)
{
    toplam = x + y; 
    // logaritma için...
    //*toplam = log(*x)+log10(*y);
    return toplam;
}

int cikarma(int *x,int *y,int *fark)
{
    *fark = *x - *y ;
    return *fark;
}

int carpma(int *x,int *y)
{
    int carpim = (*x) * (*y) ;
    return carpim;
}

int bolme(int *x, int *y, int *bolum, int *kalan)
{
    *bolum = *x / *y;
    *kalan = *x % *y;
    return *bolum, *kalan;
}


float karekok(int *x,int *y,float *kokX, float *kokY)
{
    *kokX = sqrt(*x); 
    *kokY = sqrt(*y);
    return *kokX, *kokY;
}

int usalma(int *x,int *y, int *us1, int *us2)
{
    *us1 = pow(*x,2); *us2 = pow(*y,2) ;
    return *us1,*us2;
}

// fonk. tanimlari bitti ana fonk. gecelim...

//------------------------------------
int main()
{
    int a,b,sec, 
    
    toplam = 0, fark = 0, 
    
    carpim = 0, bolum = 0, kalan = 0,
     
    us1 = 0, us2 = 0;
    
    float kokX = 0.0, kokY = 0.0;
    
    char eh;
    
    head:
    
    cout<<"a sayısını giriniz: ";cin>>a;
    
    cout<<"b sayısını giriniz: ";cin>>b;
    
    body:
    
    cout<<
    "Lütfen seçim yapınız..."
    <<endl<<endl<<
    "1.Toplama,"
    <<endl<<
    "2.Çıkarma,"
    <<endl<<
    "3.Çarpma,"
    <<endl<<
    "4.Bölme,"
    <<endl<<
    "5.Karekök Alma,"
    <<endl<<
    "6.Üs Alma."
    "\n\n\t\t Seçiminiz: ";
    cin>>sec;
    
    switch (sec)
    {
      case 1:
         {
         toplam =toplama(a,b,toplam);          cout<<endl
         <<"a + b = "<< toplam;
         break;
         }
      case 2:
          {
          fark = cikarma(&a,&b,&fark);             cout<<endl
          <<"a - b = "<< fark;
          break;
          }
      case 3:
          {
          carpim= carpma(&a,&b);           cout<<endl
          <<"a × b = "<< carpim;
          break;
          }
      case 4:
          {
      bolum=bolme(&a,&b,&bolum,&kalan);
      kalan=bolme(&a,&b,&bolum,&kalan);
          cout<<endl
          <<"a ÷ b = "<< bolum<<endl
          <<"a % b = "<< kalan;
          break;
          }       
      case 5:
          {
          kokX = 
          karekok (&a,&b,&kokX,&kokY);
          kokY = 
          karekok (&a,&b,&kokX,&kokY);
          
          cout<<endl<<"√a = "<<kokX<<
                endl<<"√b = "<<kokY;
          break;
          }
      case 6:
          {
          us1 = usalma(&a,&b,&us1,&us2);
          us2 = usalma(&a,&b,&us1,&us2);
          
          cout<<endl<<"a°= "<<us1<<
                endl<<"b°= "<<us2;
          break;
          }
      default:
          {
          cout<<endl<<
          "Yanlış giriş yaptınız"
          "Tekrar deneyiniz";
          }
    }
    
    foot:
    
    cout<<"\n\n"
    "Devam etmek ister misiniz?(e/h): ";
    cin>>eh;
    
    if (eh == 'e')
    {
     cout<<"\nSayıları değişelim mi?(e/h) :";
     cin>>eh;
        if (eh == 'e')
            goto head;
        else if (eh == 'h')
            goto body;
        else
            goto foot;
    }
        
    else if (eh == 'h')
        return 0;
    else
        cout<<"\n"
              "Yanlış seçim yaptınız";
        goto foot;
    
}