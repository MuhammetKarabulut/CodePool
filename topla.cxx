#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
 
    int s1, s2;
    int sonuc = 0;
 
    cout << "1. Sayıyı Giriniz = ";
    cin >> s1;
 
    cout << "2. Sayıyı Giriniz = ";
    cin >> s2;
 
    int i;
 
    if (s1 > s2)
    {
        for (i = s2+1; i < s1; i++)
        {
            sonuc = sonuc + i;
        }
        cout << s1 << " ile " << s2 << " arasındaki sayıların toplamı = " << sonuc << endl;
    }
    else if (s2 > s1)
    {
        for (i = s1 +1; i < s2; i++)
        {
            sonuc = sonuc + i;
        }
        cout << s2 << " ile " << s1 << " arasındaki sayıların toplamı = " << sonuc << endl;
    }
    else
        cout <<"Eşit sayılar girdiniz. "<< endl;
 
    system("pause");
    return 0;
}

 