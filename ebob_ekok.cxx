#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "Turkish");
    
    int x,y,ebob_ekok,sayac=0; 
    
    cout<<"ilk sayıyı girin: "<<endl;
    cin>>x;
    cout<<"ikinci sayıyı girin: "<<endl;
    cin>>y;
    cout<<"ebob için '1', ekok için '2' girin: ";
    cin>>ebob_ekok;
    if (ebob_ekok==1){
        if (x>y){
        for (int i=2; (i<=x);i++)
        {
            if ((x%i==0) && (y%i==0))
            {
             sayac++;
             cout<<sayac
             <<". en büyük ortak"
                   " bölen= "<<i<<endl;
    
            
            }   
        }
    }
    else if (x==y){
        cout<<x
        <<" = "<<y<<" olamaz"<<endl;
    }
    else{
        for (int i=2; (i<=y);i++)
        {
            if ((x%i==0) && (y%i==0))
            {
             sayac++;
            cout<<sayac
            <<" . en büyük ortak bölen"
              "= "<<i<<endl;
            }
        }
        }
    }
    else if (ebob_ekok==2){
        if (x>y){
        for (int i=2; (i<=x);i++){
            if ((x%i==0) && (y%i==0)){
             int ekok=(x/i)*(y/i)*i;
             cout<<"en küçük ortak kat"
                "= "<<ekok<<endl;
            }
        }
        
    }
    else{
        for (int i=2; (i<=y);i++){
            if ((x%i==0) && (y%i==0)){
             int ekok=(x/i)*(y/i)*i;
             cout<<"en küçük "
                   "ortak kat= "<<
                   ekok<<endl;
            }
        }
        }
    }
    else{
        cout<<"yanlış giriş yapıldı!..";
    }
    
    system("pause");
    return 0;
}