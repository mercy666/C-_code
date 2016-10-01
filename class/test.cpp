#include <iostream>
 
using namespace std;
 
class Demo {
public:
    void setA(int n){
      a = n;
    }
    void setB(int n){
      b = n;
    }
    int getA(){
     cout<<"a= "<<a;
     cout<<endl;
     return a;
    }
    int getB(){
     cout<<"b= "<<b;
     cout<<endl;
     return b;
    }
    int do_something(){
    return getA() + getB();
}
 
private:
    int a;
    int b;
 
};

class Demo2 : class Demo



 
int main(void) {
    Demo t;
    t.setA(11);
    t.setB(22);
    cout << endl;
    cout <<"a+b= "<< t.do_something() << endl;
    cout << endl;
     
    return 0;
}
 
