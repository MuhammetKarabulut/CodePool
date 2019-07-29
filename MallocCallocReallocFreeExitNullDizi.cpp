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
 
  // dizi = (int*)calloc(n,sizeof(int));

//  ya da..

    dizi = (int*)malloc(sizeof(int)*n);

//malloc veya calloc ile, oluşturduğumuz n elemanlı dinamik *dizi için bellekte yer açıyoruz

//if ile, eğer bellekte yer ayrılmamışsa yetersiz bellek hatası verdiriyoruz.

//for ile diziyi doldurup, for ile yazdırıyoruz

//free(dizi) ile ayırdığımız yeri serbest bırakıyoruz.
    
    if (dizi == NULL)
    {
        cout<<"Yetersiz bellek alanı";
        exit(1);
    }
 
    
    for (int i = 0; i < n; i++)
    {
        cout<<i<<". indisli elemani giriniz = ";
        cin >> dizi[i];
    }
 
    for (int j = 0; j < n; j++)
    {
        cout << dizi[j] << endl;
    }
 
    free (dizi);
 
    system("pause");
    return 0;
}
 