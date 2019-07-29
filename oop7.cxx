#include <iostream>
#include <string.h>

using namespace std;

class Sinif{
  
  private:
      int sayi;
  
  protected: 
      char krktr;
      
  public:
      string isim;
      
 Sinif(int sayi,char krktr,string isim){
      this->sayi = sayi;
      this->krktr = krktr;
      this->isim = isim;
      }
  ~Sinif(){
    cout<< krktr << isim << sayi <<endl;
      }
  };
char setChar(char k){
    cout<<"karakter gir:";
    cin>>k;
    return k;
}
   string setString(string y){
    cout<<"string giriniz: ";
    cin>>y;
    return y;
}
    int setInt(int s){
    cout<<"tamsayi giriniz: ";
    cin>>s;
    return s;
}

int main()
{
    char k; int s; string y;
    
    
    
    Sinif Sinif1(setInt(s),setChar(k),setString(y));
    
    return 0;
}