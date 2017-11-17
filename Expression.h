#ifndef EXPRESSION_H_
#define EXPRESSION_H_
#include "list.h"

class Expression{
 public:
  
  Expression();
  string infixString(Node *head);
  string prefixString(Node *head);
  string postfixString(Node *head);

 private:
  string pre;
  string post;
  string in;
  int count;
};

#endif /* EXPRESSION_H_ */
