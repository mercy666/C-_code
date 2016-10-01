#include<iostream>
#include<cstdlib>
using namespace std;


class Stack
{
private:
	int top;
	int size;
	int *array;


public:
	 Stack(int s)
	 {
	 	size=s;
	 	array=new int[s];
	 	top=0;
	 }
	
	 void push(int item){
	 	if(top==size)
	 		cout<<"Stack is Full"<< endl;
	 	else
	 	   *(array+top)=item;
	 		top++;
	 }
	 int pop(){
	 	if (top==0){

	 		cout<< "Stack is empty"<< endl;
	 	}
	 	else{
	 		int item;
	 		top--;
	 		item=*(array+top);
	 		return item;		
	 	}
	 }
};

int main()
{
	Stack stk(15);

	stk.push(1);
	stk.push(2);
	stk.push(5);
	for(int i=0; i<2; i++)
	cout<< stk.pop() <<endl;

	return 0;
}
/*
class Stack
{
      private:
              int top;
              int size;
              int *array;
      public:
             Stack(int s)
             {
                 size=s;
                 array=new int[s];
                 top=0;
             }
             
             void push(int item)
             {
                  if(top==size)
                      cout<<"Stack is full!"<<endl;
                  else
                      *(array+top)=item;
                      top++;
             }
             int pop()
             {
                 if(top==0)
                     cout<<"Stack is empty!"<<endl;
                 else
                 {
                     int item;
                     top--;
                     item=*(array+top);
                     return item;
                 }
             }
};

int main()
{
    Stack stk(15);
    
    stk.push(52);
    stk.push(41);
    stk.push(3);
    stk.push(100);
    stk.push(88);
    for(int i=0;i<5;i++)
        cout<<stk.pop()<<" ";
    cout<<endl;
    
    /*system("pause");
    return 0;
}

*/

