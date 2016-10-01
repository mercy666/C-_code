#include <iostream>

using namespace std;


int prim2(){
	int i,j,n,count=0,sum=0;
	cout << "Please enter  a number: ";
	cin >> n ;
	cout <<"2 " ;
	for(i=0;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0)
				break;
			else if(i==j+1){
				cout << i <<" ";
				sum=sum+i;
			}

		}
		
	}
	sum+=2;
	cout<< endl;
	cout<<sum;

}

int main(){
	prim2();
}