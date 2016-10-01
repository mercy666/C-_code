#include<iostream>

using namespace std;

/*void fun1(int *p ,int *q){
	*p=*p+*q;
}

int main(){
	int i=2,j=3;
	fun1(&i,&j);
	cout<< endl;
	cout << "result is " << i << endl;

} */

void fun2(int p, int q){
	p=p+q;
}
int main(){
	int i=2,j=3;
	fun2(i,j);
	cout<< endl;
	cout << "result is " << i << endl;

}



