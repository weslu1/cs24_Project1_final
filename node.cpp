#include "node.h"
#include <iostream>
#include <cassert>
using namespace std;


Node::Node(char var)
{
  this->data.var = var;
  this->node_t = VARIABLE;
  this->operand1 = NULL;
  this->operand2 =NULL;
}

Node::Node(operator_type op, Node* operand1, Node* operand2)
{
  this->data.op = op;
  this->node_t = EXPRESSION;
  this->operand1 = operand1;
  this->operand2 = operand2;
   
}
Node::Node(int val){

  this->data.val = val;
  this->node_t = INTEGER;
  this->operand1 = NULL;
  this->operand2 = NULL;
}



string Node::int_to_string() const{
  
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

void Node::setDataOP(operator_type op){
  data.op = op;
}

void Node::setDataVAL(int val)
{
  data.val=val;
}

void Node::setDataVAR(char var)
{
  data.var = var;
}
void Node::setLeft(Node* d){

  operand1 = d;

}

void Node::setRight(Node* d){

  operand2 = d;

}

void Node::setNodeType(node_type z){

  node_t = z;

}
node_type Node::getNodeType(){
  
  return node_t;

}
int Node::getDataVAL()
{
  return data.val;
}

char  Node::getDataVAR()
{
  return data.var;
}

