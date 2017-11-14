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
current = n;

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
	current.getRight() = 0;
	if(*cursor == "1")
          current.getRight() = 1;
        if(*cursor == "2")
          current.getRight() = 2;
        if(*cursor == "3")
          current.getRight() = 3;
        if(*cursor == "4")
          current.getRight() = 4;
        if(*cursor == "5")
          current.getRight() = 5;
        if(*cursor == "6")
          current.getRight() = 6;
        if(*cursor == "7")
          current.getRight() = 7;
        if(*cursor == "8")
          current.getRight() = 8;
        if(*cursor == "9")
          current.getRight() = 9;

      }

    else if(*cursor == ")")
      {

      }
    }

  }

