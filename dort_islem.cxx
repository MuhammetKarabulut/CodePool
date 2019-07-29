#include <iostream>
 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int secim;
    float sayi1, sayi2;
    float sonuc = 0;
 
    cout << "1. TOPLAMA " << endl;
    cout << "2. ÇIKARMA " << endl;
    cout << "3. ÇARPMA  " << endl;
    cout << "4. BÖLME   " << endl;
 
    cout<<"İşlem tipini seçiniz (1-4) = ";
    cin >> secim;
 
    if (secim == 1)
    {
        cout << "Toplama işlemi seçtiniz." << endl;
 
        cout << "1. Sayıyı Giriniz = ";
        cin >> sayi1;
 
        cout << "2. Sayıyı Giriniz = ";
        cin >> sayi2;
 
        sonuc = sayi1 + sayi2;
    }
    else if (secim == 2)
    {
        cout << "Çıkarma işlemi seçtiniz." << endl;
 
        cout << "1. Sayıyı Giriniz = ";
        cin >> sayi1;
 
        cout << "2. Sayıyı Giriniz = ";
        cin >> sayi2;
 
        sonuc = sayi1 - sayi2;
    }
    else if (secim == 3)
    {
        cout << "Çarpma işlemi seçtiniz." << endl;
 
        cout << "1. Sayıyı Giriniz = ";
        cin >> sayi1;
 
        cout << "2. Sayıyı Giriniz = ";
        cin >> sayi2;
 
        sonuc = sayi1 * sayi2;
    }
    else if (secim == 4)
    {
        cout << "Bölme işlemi seçtiniz." << endl;
 
        cout << "1. Sayıyı Giriniz = ";
        cin >> sayi1;
 
        cout << "2. Sayıyı Giriniz = ";
        cin >> sayi2;
 
        sonuc = sayi1 / sayi2;
    }
    else
        cout<<"Hatalı işlem tipi girdiniz.";
 
    cout<<"Sonuc = "<< sonuc;
 
    system("pause");
    return 0;
}
 