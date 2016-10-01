#include <iostream>

using namespace std;

int oddsum(){

	int sum ;
	int i,n;
	cout<<"Please input num:";
	cin>>n;
	for(i=0;i<=n;i++){
		if(i%2==1){
			sum=sum+i;	
		}
		else if(i%2==0)
		{
		   sum=sum-i;
		}
	
	}
		return sum;
}


int main(){

       cout<<"result is:"<< oddsum();
     
}
