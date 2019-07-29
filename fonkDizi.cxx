#include <iostream>
using namespace std;
void dizi()
{
    int *dizi,n,i,j,m;
    cout<<"eleman sayisi giriniz: "; 
    cin>>n;
    dizi=new int[n]; //dizi tanımla
    
    for (i=0;i<n;i++) //içinde dön
    {
        cout
        <<"dizinin "<<i+1<<". indisi :";
        cin>>m; // sayi gir
        dizi[i]=m; // sayıyı dizinin içine at.
    }
     // i yi sıfırla
    for (i=0;i<n-1;i++) //sıralama?
    {
        for (j=i+1;j<n;j++){
            
            if (dizi[i]>dizi[j])
            {
                int tut=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=tut;
            }
        }
        
        
    }

    cout
    <<"dizi["<<n<<"]= [ ";
    for (i=0;i<n;i++) // diziyi ekrana bas
    {
        cout
        <<dizi[i]<<" ";
    }
    cout<<"]";
}
int main()
{
  dizi();  
}