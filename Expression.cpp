#include <Expression.h>
#include <List.h>
#include <List.cpp>
#include <iostream>

using namespace std;

String Expression::infixString(){
}


String Expression::prefixString(){
	String s;
	Node p = head; //p is parent
	Node c = head; //c is child

	while(c.getNodeType() == EXPRESSION){
		s += holder.print_operator();
		c = c.getLeft();

	}

	if (head.getNodeType() == VARIABLE){
		s += "x";
		head = head.getRight();
	}



	return s;
}

String Expression::postfixString(){


}
