#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
 
    float sayi1, sayi2;
    int islemNo;
 
    cout<<"1. Sayıyı Giriniz = ";
    cin >> sayi1;
 
    cout <<"2. Sayıyı Giriniz = ";
    cin >> sayi2;
 
    cout << "---Menü---" << endl;
    cout << "Yapılacak işlemi seçiniz." << endl;
    cout << "<1> TOPLAMA" << endl;
    cout << "<2> ÇIKARMA" << endl;
    cout << "<3> ÇARPMA"  << endl;
    cout << "<4> BÖLME"   << endl;
 
 
a1:
    cout << "Yapılacak İşlem Numarasını Giriniz = ";
    cin >> islemNo;
 
    switch (islemNo)
    {
    case 1:
        cout << "Toplam Sonucu = " << sayi1 + sayi2 << endl;
        break;
    case 2:
        cout << "Fark Sonucu = " << sayi1 - sayi2 << endl;
        break;
    case 3:
        cout << "Çarpım Sonucu = " << sayi1 * sayi2 << endl;
        break;
    case 4:
        cout << "Bölüm Sonucu = " << sayi1 / sayi2 << endl;
        break;
    default:
        cout << "Geçersiz işlem numarası tekrardan 1 ile 4 arası işlem numarası seçiniz " << endl;
        goto a1;
        break;
    }
 
    system("pause");
    return 0;
}
 
 