#include <iostream>
#include <cstring>

using namespace std;

class okul{
    
  public:
  
   void ogrenci (int x)  
   {
        int a = x;
        
        string hello = "karakter:";
        
        cout << hello <<" "<< a <<endl;
        
        char *dizi;
        
        dizi= new char[a];
        
        char str[]=
"cekoslavakyalilastiramadiklarimizdanmisiniz";
        int say = strlen (str);
        
        for (int i=0;i<say;i++) 
            dizi[i]=str[i]; 
               
        for (int i=0;i<say;i++)
            cout<<dizi[i];
       
        cout<<endl;
        
        for (int i=0;i<a;i++){
            
            if(i==0)
                cout<<"-------";
            
            cout<<dizi[i];
            
            if (i==a-1)
                cout<<"-------";
            
            }
        }
    
  };


int main (){
    int y;
    cout<<"y:";
    cin>>y;
    
    okul deneme;
    deneme.ogrenci(y);
    
    return 0;
}