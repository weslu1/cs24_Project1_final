#include "node.h"
#include <iostream>


Node(char var = 'x')
{

  data = var;
  node_t = VARIABLE;

}
Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL)
{
  data = op;
  node_t = EXPRESSION;
  this->operand1 = operand1;
  this->operand2 = operand2;
   
}
Node(int val = 0){

  data = val;
  node_t = INTEGER;
}

string print_infix() const
{
  if (node_t == VARIABLE){
	  string infix = "x";
	  return infix;
  }
  else if (node_t == EXPRESSION){ 	
	  string infix ="( " + operand1.data + print_operator() + operand2.data + " )";  
	  return infix;
  }
  else if (node_t == INTEGER){
	  string infix = int_to_string();
	  return infix;
  }
}
string print_prefix() const
{ 
  if (node_t == VARIABLE){
	  string infix = "x";
	  return infix;
  }
  if (node_t == EXPRESSION){
	  string prefix = print_operator() + operand1.data + operand2.data ;
	  return prefix;
  }
  else if (node_t == INTEGER){
  	  string infix = int_to_string();
  	  return infix;
  }
  
}
string print_postfix() const
{
  if (node_t == VARIABLE){
	  string infix = "x";
	  return infix;
  }
  if (node_t == EXPRESSION){
	  string prefix =  operand1.data + operand2.data + print_operator();
	  return prefix;
  }
  else if (node_t == INTEGER){
	  string infix = int_to_string();
	  return infix;
  }
	
}
string int_to_string() const{
  if(node_t == INTEGER)
  return to_string(data);

}
char print_operator() const
{
  if(data == PLUS)
    return "+";
  if(data = MINUS)
    return "-";
  if(data == MULT)
    return "x";
  if(data == DIVIDE)
    return "/";
      
}
