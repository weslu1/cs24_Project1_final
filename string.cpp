
#include "string.h"
#include <iostream>

using namespace std;

int main(){

  string n;
  cout<<"Enter a balanced expression: " << endl;
  cin >> n;
  
  List list;
  list.expressionToList(n);
  int a;
  
 
  Expression Ex;

    cout<<"Infix form: " + Ex.infixString(list.getHead())<<endl;
  
    cout<<"Prefix form: " + Ex.prefixString(list.getHead())<<endl;
  
    cout<<"Postfix form: " + Ex.postfixString(list.getHead())<<endl;
 

  return 0;

}





