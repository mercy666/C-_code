#include<iostream>
#include<string>
using namespace std;
/*Call by Value*/
void swap1 (int c , int d){
	int temp=c;
	c=d;
	d=temp;
}

/*Call by Address*/
void swap2 (int *c ,int *d){
	int temp=*c;
	*c=*d;
	*d=temp;
}

void swap3(int *c ,int *d){
	int *tmp=c;
	c=d;
	d=tmp;

}


/*Call by Reference*/
void swap4(int **c , int **d){
	*c = *d;

}

int main(){
	int a=5,b=10;
	int *s=&a;
	int *t =&b;
	swap1(a,b);
	cout << "a= " << a << ",b= " << b <<endl;
	swap2(&a,&b);
	cout << "a= " << a << ",b= " << b <<endl;
	swap3(&a,&b);
	cout << "a= " << a << ",b= " << b <<endl;
	swap4(&s,&t);
 	cout << "a= " << a << ",b= " << b <<endl;
	/*int * const x=&a;
	int * const y=&b;*/

}