#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Turkish");
    int *dizi;
    int n;
 
    cout<<"Dizinin eleman sayısını giriniz = ";
    cin >> n;
 
    dizi = (int *) malloc (sizeof(int)*n);
 
    if (dizi == NULL)
    {
        cout<<"Yetersiz bellek alanı";
        exit(1);
    }
 
    int i;
    for (i = 0; i < n; i++)
    {
        cout<<i<<". indisli elemani giriniz = ";
        cin >> dizi[i];
    }
 
    for (i = 0; i < n; i++)
    {
        cout << dizi[i] << endl;
    }
 
    free(dizi);
 
    system("pause");
    return 0;
}
 