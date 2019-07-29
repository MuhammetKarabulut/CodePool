#include "Class.h"
#include <iostream>

using namespace std;

int main (){

	klass k1;
	klass k2(1);
	klass k3(1,2);
	klass k4(1,2,3);
	klass k5(1,2,3,4);
	
	k1.fonk(1,2,3,4);
	k2.fonk(1,2,3,4);
	k3.fonk(1,2,3,4);
	k4.fonk(1,2,3,4);
	k5.fonk(1,2,3,4);
	
	//k1.setA(1);	k1.setC(2);	k1.setC(3);	k1.setD(4);
	//k1.getA(); 	k1.getB(); 	k1.getC(); 	k1.getD();
	
	k1.func4(&k1);	k1.func4(&k2);	k1.func4(&k3);	k1.func4(&k4);	k1.func4(&k5);
	k2.func4(&k1);	k2.func4(&k2);	k2.func4(&k3);	k2.func4(&k4);	k2.func4(&k5);
	k3.func4(&k1);	k3.func4(&k2);	k3.func4(&k3);	k3.func4(&k4);	k3.func4(&k5);
	k4.func4(&k1);	k4.func4(&k2);	k4.func4(&k3);	k4.func4(&k4);	k4.func4(&k5);
	k5.func4(&k1);	k5.func4(&k2);	k5.func4(&k3);	k5.func4(&k4);	k5.func4(&k5);
	
return 0;
}
