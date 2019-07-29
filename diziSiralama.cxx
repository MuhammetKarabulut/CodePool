#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
 
 
    int *dizi; // esnek bir dizi için Pointer koyduk
    int elemanSayisi;
 
 
    cout<<"Kaç elemanlı dizi oluşturmak istiyorsunuz= ";
    cin >> elemanSayisi;
 
    dizi = new int[elemanSayisi];
 
    int i;
    for (i = 0; i < elemanSayisi; i++)
    {
        cout <<i<< ". indisli sayiyi giriniz = ";
        cin >> dizi[i];
    }
    
    int temp; // diziyi küçükten büyüğe sırala
    for (int i=0; i<elemanSayisi-1; i++){ 
        for (int j=0; j<elemanSayisi-1; j++) { 
            if (dizi[j] > dizi[j+1]) { 
            
                temp=dizi[j]; 
                
                dizi[j]=dizi[j+1]; 
                
                dizi[j+1]=temp; 
            } 
         }
    }
    
    int j; // dizi elemanlarını yazdıralım
    for (i = 0; i < elemanSayisi; i++)
    {
        cout<<i<<". indis= " << dizi[i];
        for (j = 1; j <= dizi[i]; j++)
        {
            cout << "*";
        }
        cout << endl; 
    }
    for (int i=elemanSayisi-1; i>=0; i--)
         cout<<dizi[i]<<", "; // diziyi tersten yazdır
 
    system("pause");
    return 0;
}
 