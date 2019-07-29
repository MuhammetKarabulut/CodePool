#include <iostream>
#include <string>
using namespace std;
 
int bolmeYap(int *bolunen, int *bolen, int *kalan);
 
int main()
{
    setlocale(LC_ALL, "Turkish");
    int a, b;
    int kalan = 0;
 
    cout<<"Bölünen sayıyı giriniz = ";
    cin >> a;
 
    cout<<"Bölen sayıyı giriniz = ";
    cin >> b;
 
    int bolum = bolmeYap(&a, &b, &kalan);
// *bolunen=&a;*bolen=&b;*kalan=&kalan olacak şekilde fonksiyona değer atıyoruz
    
    cout<<"Kalan = "<< kalan <<endl;
    cout<<"Bölum = "<< bolum <<endl;
 
    system("pause");
    return 0;
}
 
int bolmeYap(int *bolunen, int *bolen, int *kalan)
{
    int bolum = *bolunen / *bolen;
    *kalan = *bolunen % *bolen;
    return bolum;
} 