#include<iostream>
using namespace std;

class klass
{
protected:	int d;
private:	  int a; int b; int c;
public:
	klass(	  					 ){a=0;b=0;c=0;d=0;	cout<<"klass()"<<							   endl;};
	klass(int _a					 ){a=_a;			   cout<<"klass(int)"<<							endl;};
	klass(int _a,int _b			  ){a=_a;b=_b;		  cout<<"klass(int,int)"<<						endl;};
	klass(int _a,int _b, int _c	  ){a=_a;b=_b;c=_c;	 cout<<"klass(int,int,int)"<<					endl;};
	klass(int _a,int _b,int _c,int _d){a=_a;b=_b;c=_c;d=_d;cout<<"klass(int,int,int,int)"<<				endl;};
   ~klass(						   ){					cout<<"~klass() = "<<a<<","<<b<<","<<c<<","<<d<<endl;}; 
	
	void setA(int _a){a=_a;}	int getA(){return a;}
	void setB(int _b){b=_b;}	int getB(){return b;}
	void setC(int _c){c=_c;}	int getC(){return c;}
	void setD(int _d){d=_d;}	int getD(){return d;}
	
	
	void func1(klass *k){cout<<"func(&k) = "<<a<<						endl;} 
	void func2(klass *k){cout<<"func(&k) = "<<a<<","<<b<<				endl;} 
	void func3(klass *k){cout<<"func(&k) = "<<a<<","<<b<<","<<c<<		endl;} 
	void func4(klass *k){cout<<"func(&k) = "<<a<<","<<b<<","<<c<<","<<d<<endl;} 
	
	
	void fonk(int x,int y,int z,int t){cout<<"fonk() = "<<a<<","<<b<<","<<c<<","<<d<<endl;} 
}; 
