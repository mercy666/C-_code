#include <iostream>
#include <vector>

using namespace std;


struct Node{
	int data;
	Node *next;
};

void Init(struct Node *head, int n){
	head->data=n;
	head->next=NULL;
}

void add(struct Node *head , int n){
	Node *newNode= new Node;
	newNode->data=n;
	newNode->next=NULL;

	Node *current= head;
	while(current){
		if(current->next==NULL){
			current->next=newNode;
			return ;
		}
		current=current->next;
	}
}

void Insert(struct Node **head, struct Node *ptr, int n){
	Node *newNode=new Node;
	newNode->data=n;
	newNode->next=NULL;
	if(ptr==NULL){
		newNode->next=*head;		//插在最前
		*head=newNode;
	}
	else{
		if(ptr->next==NULL){			//插在最後
			ptr->next=newNode;
		}
		else{						//插在中間
			newNode->next=ptr->next;
			ptr->next=newNode;
		}
	}
}

struct Node *Search(struct Node *head, int n){
	Node *current = head;
	while(current){
		if(current->data==n){
			return current;
		}
		current=current->next;		
	}
	cout <<"No Node: "<< n << "in list"<< endl;
}

bool DeleteNode(struct Node **head,struct Node *ptrDel){
	Node *current = *head;
	if(ptrDel==*head){
		*head=current->next;
		delete ptrDel;
		return true;
	}
	while(current){
		if(current->next=ptrDel){
			current->next=ptrDel->next;
			delete ptrDel;
			return true;
		}
		current=current->next;
	}

	return false;
}

void Copy(struct Node *n1,struct Node **Cnew){
		if(n1!=NULL){
			*Cnew=new Node;
			(*Cnew)->data=n1->data;
			(*Cnew)->next=NULL;
			Copy(n1->next,&((*Cnew)->next));
		}
}

int Compare(struct Node *n1,struct Node *n2){
	static int flag;

	if(n1==NULL&& n2==NULL){
		flag=1;
	}
	else{
		if(n1==NULL||n2==NULL){
			flag=0;
		}
		else if(n1->data != n2->data ){
			flag=0;
		}
		else
			Compare(n1->next,n2->next);
	}
	return flag;
}

void DeleteList(struct Node **node){
	struct Node *tmp;
	while(*node){
		tmp=*node;
		*node=tmp->next;
		delete tmp;
	}
}
void display(struct Node *head){
	Node *list = head;
	while(list){
		cout<< list->data << " ";
		list = list->next;
	}
	cout<<endl;
	cout<<endl;
}

struct Node *reverse(struct Node **head){
	Node *parent=*head;
	Node *me= parent->next;
	Node *child=me->next;
	parent->next=NULL;
	while(child){
		me->next=parent;
		parent=me;
		me=child;
		child=child->next;
	}
	me->next=parent;
	*head=me;
	return *head;
}

int main(){
	struct Node *newHead;
	struct Node *head=new Node;

	Init(head,10);
	display(head);

	add(head,10);
	display(head);

	add(head,30);
	display(head);
	Insert(&head,NULL,5);
	display(head);
}