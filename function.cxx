#include <iostream>
#include <string>
using namespace std;
 //Compiler version g++ 6.3.0
 
 
 int a,b,toplam;
 
void fonksiyon(int a, int b){//değer döndürmez
    
	toplam= a+b;
}
int alanCevre(int a, int b){
    int kareAlan= a*a;
    int dikdAlan=a*b;
    int kareCevre=4*a;
    int dikdCevre=2*(a+b);
    cout<<"kare alanı= "<<kareAlan<<",dikdortgen alani= "<<dikdAlan<<",kare cevre= "<<kareCevre<<",dikdortgen cevre= "<<dikdCevre<<endl;
    return 0;
}
 int main()
 {
    head:
    int a,b;
    cout<<"1.sayı gir: \n";
    cin>>a;
    cout<<"2.sayı gir: \n";  
    cin>>b;
   
     fonksiyon(a,b);
   
 	for (int i=0;i<toplam;i++){
 	   cout <<toplam<< " kez hello yazdık"<<endl;
     }
     
     cout<<alanCevre(a, b)<<endl;
     
     
     cout<<"for EXIT press X: ";
     string out;
     cin>>out;
     if ((out == "x")||(out=="X")){
         return 0;
         }
     else{
         goto head;
         }
     
 }