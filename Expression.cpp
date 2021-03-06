#include "expression.h"
#include <iostream>

using namespace std;

Expression::Expression()
{
 string  pre = "";
 string post = "";
 string in = "";
 int count = 0;
}


string Expression::infixString(Node *n){
  
  int decount = 0;
  if(n!=NULL)
    {
      if(n->getNodeType()==VARIABLE)
	{
	  in+=n->getDataVAR();

	}
      else if(n->getNodeType() == INTEGER)
	{

	  in+=to_string(n->getDataVAL());
	  in+= ')';
	}
      else if(n->getNodeType() == EXPRESSION)
	{
	  in+='(';
	  
	}
      infixString(n->getLeft());
      if(n->getNodeType() == EXPRESSION){
      in += n->print_operator();
      count++;
      }
      
      infixString(n->getRight());
      
      

    }
  
  return in;

}



string Expression::prefixString(Node *n){
  if(n != NULL){
    if(n->getNodeType()==VARIABLE)
      {
	pre+=n->getDataVAR();
	
      }
    else if(n->getNodeType() == INTEGER)
      {
	
	pre+=to_string(n->getDataVAL());
	
      }
    else if(n->getNodeType() == EXPRESSION)
      {
	
	
	pre+=n->print_operator();
	
      }
    prefixString(n->getLeft());
    prefixString(n->getRight());
  }
  return pre;
  
}

string Expression::postfixString(Node *n){

  if (n != NULL){
    postfixString(n->getLeft());
    postfixString(n->getRight());
    if(n->getNodeType() == VARIABLE)
      {
	post+=n->getDataVAR();
      }
    else if(n->getNodeType() == INTEGER)
      {
	post+=to_string(n->getDataVAL());
      }
    else if(n->getNodeType()==EXPRESSION)
      {
	post+=n->print_operator();
      }
    
  }
  return post;


}

