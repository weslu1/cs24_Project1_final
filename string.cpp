#include "node.cpp"
#include "list.cpp"
#include "Expression.cpp"
#include <iostream>

using namespace std;

int main(){

  string n;
  cout<<"Enter a balanced expression: "<<endl;
  cin>>n;

  List list = new List;
  list(n);

  int a;
  cout<<"Enter 1 for infix, 2 for prefix, 3 for postfix: "<<endl;
  cin>>a;

  if(a == 1)
    return infixString();
  else if(a==2)
    return prefixString();
  else if(a==3)
    return postfixString();
  else
    cout<<"not a valid number"<<endl;



}





