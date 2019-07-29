#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
     
    cout<<"Kaç sıra yapılsın?: ";
     
    int i, j,adet;
    
    cin>>adet;
 
    for (i = 1; i <= adet; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<" ©++ ";
        }
        cout << endl;
    }
 
    system("pause");
    return 0;
}
 