#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    basla:
    srand (time (NULL) );
    int *sayilar, *array, *dizi;
    int n,m;
    char e;
    cout << "Kaç elemanlı dizi oluşturmak istiyorsunuz = ";
    cin >> n;
    
dizi=(int*)malloc(sizeof(int)*n);
    sayilar=(int*)calloc(n/2,sizeof(int));
    
    if (n%2!=0)
    {
        
        array = new int[n-n/2+1];
        
        for (int j=n-n/2-1; j<n; j++)
        {
            array[j] = rand() %9 +1;
            cout
            <<"Pc: "<<array[j]<<endl;
            dizi[j]=array[j];
        }
    }
    else
    {
    
    array=new int[n-n/2];
    
    for (int j=n-n/2; j<n; j++)
    {
            array[j] = rand() %9 +1;
            cout
            <<"Pc: "<<array[j]<<endl;
            dizi[j]=array[j];
        }
    }
    
    for (int i = 0; i<n/2; i++)
    {
        cout<<"Sayı giriniz: ";
        cin>>sayilar[i];
        dizi[i]=sayilar[i];  
    }
//uretilen sayilarin farkli olmasi icin!    
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (dizi[i]==dizi[j])
            {
                dizi[j]= rand()%99;
            }
            
        }
    }
//diziyi kucukten buyuge siralayalim 
   
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (dizi[j]>dizi[j+1])
            {
                int tut=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=tut;
            }
            
        }
    }
    
    cout<<endl<<"dizi = [ ";
    
    for (int i = 0; i<n; i++)
    {
        cout<<dizi[i]<<" ";
    }
    
    cout<<"]"<<endl;
    cout<<"Devam etmek istiyorsanız"
          " 'e' yazın: ";
    cin>>e;
    
    if (e == 'e')
        goto basla;
    
    system("pause");
    
    return 0;
}