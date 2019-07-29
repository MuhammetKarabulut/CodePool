#include <iostream>
using namespace std;

class sirket {
    
    public:
    
    int maas;
    string isim;
    
    
    
    sirket(int m,string n){
        maas = m;
        isim = n;
        
        cout<<isim<<" = "<<maas;
    }
};

int main(void){
    int m;
    string n;
    cin>>m; cin>>n;
    
    sirket s1 = sirket(m,n);
    
    return 0;
}