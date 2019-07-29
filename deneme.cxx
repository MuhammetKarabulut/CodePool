#include <iostream>
using namespace std;

class deneme{
    
    private:
        
        int x;
        
        string y;
        
        float fonk(float z, int t)
        {
            return z * t;
        }
        
    public:
        
        void tanimla(int a, string b)
        {
            x = a;
            y = b;
        }
        
        void yaz()
        {
            cout<<"int x= "<<x<<endl;
            cout<<"string y= "<<y<<endl;
        }
        
        void fonk_ulas(float c,int d)
        {
   cout<<"private fonksiyona ulasildi.";    
   cout<< fonk(c,d) <<endl;
        }
    }dene1; //obj.created.
    
int main(){
    
    dene1.tanimla(3,"selam");
    
    dene1.yaz();
    
    deneme dene2;
    
    dene2.fonk_ulas(2.3, 5);
    
    return 0;
    
    }