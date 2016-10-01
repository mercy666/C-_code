#include <iostream>
using namespace std;

class Node{
public:
	Node():data(0),next(NULL){}
	int data;
	Node *next;
};


class Stack{
public:
	Stack():head(NULL){};
    ~Stack();
	void push(double x);
	int pop();
	int showtop() ;
	void showelement() ;
private:
	Node *head;
};



Stack::~Stack(){
	cout<<"Free:"<<endl;
	while(head!=NULL){
		int value = this->pop();
		if (value!=-1)
		{
			cout<<"Delete: "<< value <<endl;/* code */
		}
	}
}

void Stack::push(double n){
	Node *newNode = new Node;
	newNode->data=n;
	newNode->next=head;
	head=newNode;
}
int Stack::pop(){
	Node *current= head;
	/*while(head){
		current=head;
		head=current->next;
		int n = current->data;
		delete current;
		return n;
	}*/
	head = head -> next;
	current -> next = NULL;
	int n = current -> data;
	delete current;
	return n;
		
}

int Stack::showtop() {
	 if( head == NULL )
        return -1;
    else{
        return head->data;
    }
}
void Stack::showelement() {
	Node *list = head;
	while (list){
		cout<< list->data<<"  ";
		list=list->next;
	}
	cout<< endl; 
}

int main(){
	Stack stk;
	int command;
	while(true){
		cout <<"1.push  2.pop  3.showtop  4.showelement  5.exit: ";
		cin>>command;
		if(command==5)
			break;

		switch(command){
			case 1:
				cout<<"push: ";
				double value;
				cin >> value;
				stk.push(value);
				break;
			case 2:
				cout<<"pop:"<<stk.pop()<<endl;
				break;
			case 3:
				cout<<"Top is:"<<stk.showtop()<<endl;
				break;
			case 4:
				stk.showelement();
				break;
			default:
				break;
		}

	}
}
