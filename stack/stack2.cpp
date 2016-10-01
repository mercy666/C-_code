#include <iostream>
using namespace std;

class Node{
public:
    Node( ):data(0), next(NULL){}
    int data;
    Node *next;
};

class Stack{
public:
    Stack( ):top(NULL){};
    ~Stack( );
    void push( int );
    int pop();
    int showtop() const;
    void showElements( ) const;
private:
    Node *top;
};



Stack::~Stack( ){
    cout << "Free: \n";
    while( top != NULL ){
        int v = this->pop();
        if( v != -1 )
            cout << "delete " << v << " ";
    }
}

void Stack::push(int n){
    Node *add = new Node;
    add->data = n;
    add->next = top;
    top = add;
}

int Stack::pop( ){
    if( top == NULL ){
      cout<<"No element"<<endl;
      return -1;
      
  }
    else{
        Node *deleted = top;
        top = deleted->next;
        int r = deleted->data;
        delete deleted;
        return r;
    }
}

int Stack::showtop() const{
    if( top == NULL )
        return -1;
    else{
        return top->data;
    }
}

void Stack::showElements( ) const{
    Node *current = top;
    while( current != NULL ){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}



int main( ){
    Stack s;
    int cmd;
    while(true){
        cout << "1.push 2.pop 3.showtop 4.show 5.exit: ";
        cin >> cmd;
        if( cmd == 5 )
            break;

        switch(cmd){
        case 1:
            cout << "push: ";
            int v;
            cin >> v;
            s.push(v);
            break;
        case 2:
            cout << "pop " << s.pop( );
            cout << endl;
            break;
        case 3:
            v = s.showtop();
            if( v == -1 )
                cout << "No element!\n";
            else
                cout << "top element: " << s.showtop();
            cout << endl;
            break;
        case 4:
            s.showElements( );
            break;
        default:
            break;
        }

    }
}