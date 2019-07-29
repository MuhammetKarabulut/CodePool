#include <iostream>
using namespace std;


int main()
{
    int *dizi1, *dizi2, *dizi3;
    int i,j, n, m, p, tut, max, min, ortala, toplam=0;
    
    cout<<"1.dizi icin"
          " eleman sayisi gir: ";
    cin>>n;    
    cout<<"2.dizi icin"
          " eleman sayisi gir: ";
    cin>>m;
    p=m+n;
    dizi1=(int*)malloc(sizeof(int)*n);
    dizi2=(int*)calloc(m,sizeof(int));
    dizi3=new int[p];
    cout<<endl;
    for (i=0; i<n; i++)
    {
        cout
        <<"1.dizi icin sayi gir: ";
        cin>>dizi1[i];
        cout<<endl<<"1.dizinin "<<
        i+1<<".indisi:"<<dizi1[i]<<endl;
    }
    
    cout<<endl;
    
    for (i=0; i<m; i++)
    {
        cout
        <<"2.dizi icin sayi gir: ";
        cin>>dizi2[i];
        cout<<endl<<"2.dizinin "<<i+1
        <<".indisi:"<<dizi2[i]<<endl;
    }
    for (i=0;i<p;i++)
    {
        dizi3[i]=dizi1[i];
        if (i>=n)
            dizi3[i]=dizi2[i-n];
    }
    cout<<endl;
    for (i=0;i<p;i++)
    {
        cout<<dizi3[i]<<" ";
    }
    //diziyi buyukten kucuge sirala...
    
    for (i=0;i<p-1;i++)
    {
        for (j=0;j<p-1;j++)
        {
            if (dizi3[j]<dizi3[j+1])
            {
                tut=dizi3[j];
                dizi3[j]=dizi3[j+1];
                dizi3[j+1]=tut;
            }
        }
    }
    cout<<endl<<"buyukten kucuge : \n"
                "[ ";
                
    for (i=0;i<p;i++)
    {
        toplam+=dizi3[i];
        cout<<dizi3[i]<<" ";
    }
    cout<<"]"<<endl<<"toplam="<<toplam;
    
    ortala=toplam/p;
    cout<<endl<<"ortalama="<<ortala;
    
    max=dizi3[0];min=dizi3[p-1];
    cout<<endl<<"max="<<max;
    cout<<endl<<"min="<<min;
    
    free (dizi1);//malloc free
    free (dizi2);//calloc free
    //dizi3 = new int[p] icin free YOK!!
    delete (dizi3);      
    return 0;
}