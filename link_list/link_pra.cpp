#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Node{
private: 
	int data;
	Node *next;
	friend class linklist;

};

class linklist{
public:
	linklist():head(NULL){}
	Node *initNode();
	void freeNode(Node *p);
	void insertNode(Node *ptr, int n);
	bool DeleteNode(Node *ptrDel);
	Node *searchNode(int n);
	int getsize();
	Node *reverse();
	void showlinklist();
private:
	Node *head;
};


Node *linklist::initNode(){
	Node *newNode = new Node;
	if(newNode==NULL){
		cout << "Memory Failed" << endl;
		exit(1);
	}
	return (newNode);
}

void linklist::freeNode(Node *p){
	delete p;
}
void linklist::insertNode(Node *ptr , int n){
	Node *newNode = new Node;  //ptr=ptrbeforenewnode
	newNode -> data = n;
	newNode -> next =NULL;
	if(ptr == NULL){
		newNode -> next = head;
		head = newNode;
	}
	else{

	if(ptr -> next == NULL){
		ptr -> next = newNode;
	}
	else{
		newNode -> next = ptr -> next;
		ptr -> next = newNode;
	}
  }
}

bool linklist::DeleteNode(Node *ptrDel){
	Node *current = head;
	if(ptrDel == head){
		head = current -> next;
		delete ptrDel;
		return true;
	}
	while(current){
		if (current -> next == ptrDel)
		{
			current -> next == ptrDel -> next;
			delete ptrDel;
			return true;
		}
		current = current -> next;
	}
	return false;
}

Node *linklist::searchNode(int n){
	Node *current = head;
	while(current){
		if(current -> data == n){
			return current;
			current = current -> next;
		}
	}
	cout  << "No Node " << n << "is found ." << endl;
}

int linklist::getsize(){
	int n = 0;
	Node *current = head;
	while(current){
		n++;
		current = current -> next;
	}
	return n;
}

void linklist::showlinklist(){
 	Node *current = head;
 	while(current){
 		cout << current -> data ;
 		current = current -> next;
 	}
 	cout << endl;
}

Node *linklist::reverse(){
	if(head == NULL || head -> next == NULL){
		cout << "No reverse" << endl;
		return 0;
	}
	Node *parent = head;
	Node *current = parent -> next;
	Node *child = current -> next;

	//parent as tail
	parent -> next =NULL;
	while(child){
		current -> next = parent;
		parent = current;
		current = child;
		child = child -> next;
	}
	current -> next = parent;
	head = current;
	return head;
}





int main(){
	linklist link;
	link.insertNode(NULL,3);
	link.insertNode(NULL,2);
	link.showlinklist();	
	link.reverse();
	link.showlinklist();
	cout << "List size is :  " << link.getsize() << endl; 

}
