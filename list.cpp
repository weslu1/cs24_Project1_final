#include "list.h"
#include <iostream>


using namespace std;



void expressionToList(string exp){
  node* current;
  char* cursor;
  for(int i = 0; i<exp.length(); i++){
    cursor = exp[i];
    if(*cursor == "("){
      node* n = new node;
      if(current.operand1 == NULL)
        current.getLeft() = n;
      else
        current.getRight() = n;
    }

    else if(*cursor == "+" || *cursor == "-" || *cursor == "*" || *cursor == "/")
      {
        if(*cursor == "+")
          current = new node(PLUS);
        if(*cursor == "-")
          current = new node(MINUS);
        if(*cursor == "*")
          current = new node(MULT);
        if(*cursor == "/")
          current = new node(DIVIDE);
      }

    else if(*cursor == "x")
      {
        current.getLeft() = "x";
      }
    else if(*cursor == "0" ||*cursor == "1" ||*cursor == "2" ||*cursor == "3" ||*cursor == "4" ||*cursor == "5" ||*cursor == "6" ||*cursor == "7" ||*cursor == "8" ||*cursor == "9")
      {
	if(*cursor == "0")

      }
    }

  }

