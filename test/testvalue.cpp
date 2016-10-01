#include <iostream>

using namespace std;


/*
int min(int a,int b,int c){
	return (a<=b && a<=c) ? a : min(b,c,a) ;
}


int main(){
	cout<<min(10,6,9);

}
*/



/*
void A(){
	cout<<X(3,5)<<endl;
}

#define X(a,b) (a*b)

void B(){
	cout<<X(2,3)<<endl;
}

int main(){
	A();
	B();
}
*/


int globalvar=0;
const double pi=3.14;
void f1(){
	int localvar=0;
	static int staticvar=0;
	const int constvar=0;
	localvar++;
	globalvar++;
	staticvar++;
	
	cout<<"Global: "<<globalvar<<endl;
	cout<<"Local: "<<localvar<<endl;
	cout<<"Static: "<<staticvar<<endl;
	cout<<"Const: "<<pi<<endl;
}

void f2(){
	int localvar=0;
	static int staticvar=0;
	const int constvar=0;
	localvar++;
	globalvar++;
	staticvar++;
	
	cout<<"Global: "<<globalvar<<endl;
	cout<<"Local: "<<localvar<<endl;
	cout<<"Static: "<<staticvar<<endl;
	cout<<"Const: "<<pi<<endl;
}

int main(){
	f1();
	f2();
	f2();
	f2();
	f2();
	f2();
}