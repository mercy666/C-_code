#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
    int p = 10; 
    int *ptr1 = &p; 
    int **ptr2 = &ptr1; 
    int ***ptr3 = &ptr2;

    cout << "p的值：" << p << endl; 
    cout << "p的記憶體位置: " << &p << endl; 

    cout << endl;

    cout << "*ptr1 = p  " << *ptr1 << endl; 
    cout << "ptr1 = &p  " << ptr1 << endl; 
    cout << "ptr1的記憶體位置: &ptr1  " << &ptr1 << endl; 

    cout << endl;
 
    cout << "**ptr2 = p  " << **ptr2 << endl; 
    cout << "*ptr2 = &p  " << *ptr2 << endl; 
    cout << "ptr2 = &ptr1  " << ptr2 << endl; 
    cout << "ptr2的記憶體位置: &ptr2  " << &ptr2 << endl;
    cout << endl;

    cout << "***ptr3 = p  " << ***ptr3 << endl; 
    cout << "**ptr3 = &p  " << **ptr3 << endl; 
    cout << "*ptr3 = &ptr1  " << *ptr3 << endl; 
    cout << "ptr3 = &ptr2  " << ptr3 << endl; 


    cout << endl;
 
    cout << "整理(誰儲存了誰？)：" << endl; 
    cout << "&p = " << &p << "\t\t" << "ptr1 = " << ptr1 << endl; 
    cout << "&ptr1 = " << &ptr1 << "\t" 
         << "ptr2 = " << ptr2 
         << endl;
 
    return 0; 
}

