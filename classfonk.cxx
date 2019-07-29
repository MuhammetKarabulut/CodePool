#include <iostream>
using namespace std;

class sinif{
  private:
  int a;
  
  public:
  void setA (int* a){
      this->a = *a;
  }
  int getA(){
      return this->a;
  }
  
  
}sinif1;

int main(){
    int a;
      cout << "sayi gir: "; cin>>a;

sinif1.setA(&a);

cout<<"girdiginiz sayi: "<<sinif1.getA();

return 0;
}