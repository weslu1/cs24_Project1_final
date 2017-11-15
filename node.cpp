#include "node.h"
#include <iostream>
#include <cassert>
using namespace std;


Node::Node(char var)
{
  this->data.var = var;
  this->node_t = VARIABLE;

}

Node::Node(operator_type op, Node* operand1, Node* operand2)
{
  this->data.var = op;
  this->node_t = EXPRESSION;
  this->operand1 = operand1;
  this->operand2 = operand2;
   
}
Node::Node(int val){

  this->data.val = val;
  this->node_t = INTEGER;
}

string Node::print_infix() const
{
  if (node_t == VARIABLE){
	  string infix = "x";
	  return infix;
  }
  else if (node_t == EXPRESSION){ 	
    string infix ="( " + to_string(operand1->data.val) + print_operator() + to_string(operand2->data.val) + " )";  
	  return infix;
  }
  else // (node_t == INTEGER){
    {
	  string infix = int_to_string();
	  return infix;
  }
}
string Node::print_prefix() const
{ 
  if (node_t == VARIABLE){
	  string infix = "x";
	  return infix;
  }
  if (node_t == EXPRESSION){
    string prefix = print_operator() + to_string(operand1->data.val) + to_string(operand2->data.val);
	  return prefix;
  }
  else// (node_t == INTEGER)
    {
  	  string infix = int_to_string();
  	  return infix;
  }
  
}
string Node::print_postfix() const
{
  if (node_t == VARIABLE){
	  string infix = "x";
	  return infix;
  }
  if (node_t == EXPRESSION){
    string prefix =  to_string(operand1->data.val) + to_string(operand2->data.val) + print_operator();
	  return prefix;
  }
  else// (node_t == INTEGER)
    {
	  string infix = int_to_string();
	  return infix;
  }
	
}
string Node::int_to_string() const{
  assert(node_t == INTEGER);
    return to_string(data.val);
   

}
char Node::print_operator() const
{
  if(data.op == PLUS)
    return '+';
  if(data.op == MINUS)
    return '-';
  if(data.op == MULT)
    return 'x';
  else//(data.op == DIVIDE)
    return '/';
      
}
Node* Node::getLeft(){
	return operand1;
}

Node* Node::getRight(){
	return operand2;
}
void Node::setData(data_type d){
	data = d;
}

