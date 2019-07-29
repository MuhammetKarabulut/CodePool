#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
 
    int toplam = 0;
    int kalan;
    int n;
 
    cout<<"Basamakları toplamı hesaplanacak sayıyı giriniz = ";
    cin >> n;
 
    while (n != 0)
    {
        kalan = n % 10;
        toplam = toplam + kalan;
        n = n / 10;
    }
 
    cout<<"Girdiğiniz sayının basamakları toplamı = "<<toplam<<endl;
 
    system("pause");
    return 0;
}
 