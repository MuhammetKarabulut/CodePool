#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            int carpim = i * j;
            cout << i << " x " << j << " = " << carpim << endl;
        }
        cout<< endl;
    }
    system("pause");
    return 0;
}
 