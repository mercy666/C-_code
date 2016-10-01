#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double z[] = {1,2,3,4,5};
	double *p = z;
	for (int i=0; i<(sizeof(z)/sizeof(double)) ; i++){
		cout << *(p+i);

		cout<< endl;
	}
	cout<<sizeof(z)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(unsigned int)<<endl;
	cout<<sizeof(unsigned long)<<endl;
	cout<<sizeof(long)<<endl;

}



/*static double step;
void print(int  d){
	cout<< d+step;
}

//extern double step;
//void print(double);

int main(){
	step=1.0;
	print(0);
	float a=1.0;
	cout<<.2a;
}
*/