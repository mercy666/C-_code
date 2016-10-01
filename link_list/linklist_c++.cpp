#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
struct List {
 
  int no;
  string name;
 };
 
int main() {
   vector<List> vec;
   
   while(1) {
    List list;
    cout << "No. = ";
    cin >> list.no;
    
    if (list.no == 0)
       break;
  
    cout << "Name = ";
    cin >> list.name;
     
    vec.push_back(list);
  }
   
  vector<List>::iterator iter ;
  for(iter = vec.begin(); iter != vec.end(); ++iter)
     cout << "No. = " << iter->no << ", Name = " << iter->name << endl;
}