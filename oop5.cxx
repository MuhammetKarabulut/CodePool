#include <iostream>
#include <string>
using namespace std;

class Araba{
    
    private:
        int adet;
        string marka;
    
    public:
    
    static int say;
    
    Araba(int sayi,string mark)
    {
        this.adet=sayi; // ya da
        this->marka=mark;
        say++;
    };
    
    void yazdir()
    {
        cout<<adet<<marka<<endl;
    }  
    
    ~Araba()
    {
        cout<<say<<" kez yikici calisti"<<endl;
    };
};

int Araba::say = 0;

int main()
{
    
    Araba car1(5,"-nissan"); // ya da
    Araba car2 = Araba(3,"-bmw");
    car1.yazdir();
    car2.yazdir();
    cout<<endl;
    cout<<Araba::say<<" adet arac var"<<
    endl;
    
    return 0;
}