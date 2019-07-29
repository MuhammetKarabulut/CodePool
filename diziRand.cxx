#include <iostream>
#include <time.h>
using namespace std;

void otoGir(int n,int i,int *dizi);

void kendinGir(int n, int i,int *dizi);

void siralama(int *dizi, int i, int j, int n, int t);

void diziYazdir(int *dizi,int i,int n);

int main ()
{
    setlocale(LC_ALL, "Turkish");
    
    srand (time (NULL) );
	
	int i,j,n,t,sec, *dizi;
	
	cout << "Kac elemanli dizi"
	        " istersiniz? \n"
	        "Lutfen eleman sayisini"
	        " giriniz: ";
	cin >> n;
	dizi = new int [n];
	head:
	cout<<"1.Otomatik\n"
	      "2.Kendiniz doldurun\n"
	      "Seciminiz : ";
	cin>>sec;
	cout<<endl<<endl;
	if (sec==1){
	    otoGir(n,i,dizi);
	    siralama(dizi,i,j,n,t);
	    diziYazdir(dizi,i,n);
	}
	else if (sec==2){
	    kendinGir(n,i,dizi);
	    siralama(dizi,i,j,n,t);
	    diziYazdir(dizi,i,n);
	}
	else
	{
	    cout<<"\nYanlis secim!!\n\n";
	    goto head;
	}
	
	return 0;
}

void otoGir(int n,int i,int *dizi)
{
    for (i=0;i<n;i++)
        dizi[i] = rand()%99;
}

void kendinGir(int n, int i,int *dizi)
{
    for (i=0;i<n;i++)
	{
		cout<<"Dizinin '"<<i+1
		<<"'. elemani: ";
        cin>>dizi[i];
    }
}

void siralama(int *dizi, int i, int j, int n, int t)
{
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
    	{
    	    if (dizi[i]>dizi[j])
    	    {
                t = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = t;
    	    }
        }
    }
}
void diziYazdir(int *dizi,int i,int n)
{
    cout<<endl<<"[ ";
    for (i=0;i<n;i++)
	{
        cout<<dizi[i]<<" ";
    }
    cout<<"]";
}