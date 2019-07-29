#include <iostream>
#include <math.h>
using namespace std;


float bolme(float x, float y){
        float z = x/y;
        return z;
    }
int main()
{
    int x,y;
    cout<<"x:";cin>>x;
    cout<<"y:";cin>>y;
    cout<<"x / y = " << bolme(x,y);
    
    return 0;  
}