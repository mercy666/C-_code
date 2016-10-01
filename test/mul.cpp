#include <iostream>

using namespace std;

int mul(){
	int sum,i,n;
	cout<<"PLease input number: ";
	cin >> n;
	for(i=0;i<=n;i++){
		sum+=i*i;
	}
	return sum;
}

int main(){
	cout << "Result is: "<< mul();
}