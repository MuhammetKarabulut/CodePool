#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int a,b,i,j,s;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    int A[a],B[b];
    for (i=0; i<=a; i++){
        s = rand() % 99;
        A[i] = s;
    }
    for (i=0; i<=b; i++){
        s = rand() % 99;
        B[i] = s;
       
    }
    for (i=0;i<a-1;i++){
        for (j=i+1;j<a;j++){
            if (A[i]==A[j]){
                s=rand()%99;
                A[i]=s;
            }
        }
    }
    for (i=0;i<b-1;i++){
        for (j=i+1;j<b;j++){
            if (B[i]==B[j]){
                s=rand()%99;
                B[i]=s;
            }
        }
    }
    for (i=0; i<a-1; i++){
        
        for (j=i+1;j<a;j++){
            
            if (A[i] > A[j]){
                s = A[i];
                A[i] = A[j];
                A[j] = s;
  // küçükten büyüğe siraladık      
            }  
        }
    }
    for (i=b-1;i>=0;i--){
        
        for (j=b;j>=0;j--){
            
            if (B[i] < B[j]){
                s = B[i];
                B[i] = B[j];
                B[j] = s;
    // büyükten küçüğe sıraladık        
            } 
        } 
    } 
    
    
    
    cout<<"A[a]=";
    for (i=0;i<a;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<"B[b]=";
    for (i=0;i<b;i++){
        cout<<B[i]<<" ";
    }
    return 0;
}