#include <iostream>
using namespace std;

class sirket {
    
    public:
    
    int maas;
    string isim;
    
    void gir(int m, string n){
        maas = m;
        isim = n;
    }
    void gor(){
        cout<<isim<<" = "<<maas;
    }   
};

int main(void){
    
    sirket s1,s2;
    int a;
    string b;
    cin>>a; cin>>b;
    s1.gir(a,b);
    s1.gor();
    
    return 0;
}