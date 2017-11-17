#ifndef NODE_H
#define NODE_H
#include<string>
using namespace std;

enum node_type{EXPRESSION, VARIABLE, INTEGER};
enum operator_type{PLUS, MINUS, MULT, DIVIDE};

union data_type {
    operator_type op;
    char var;
    int val;
};

class Node {
	public:
		// Constructor
        Node(char var);
        Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL);
        Node(int val);
	
        // Destructor
        ~Node();
      
        
        string int_to_string() const;
        char print_operator() const;
        Node* getLeft();
        Node* getRight();
        void setDataOP(operator_type opd);
	void setDataVAR(char var);
	void setDataVAL(int val);
	void setLeft(Node* d);
	void setRight(Node* d);
	void setNodeType(node_type z);
	node_type getNodeType();
	data_type getData();
	int  getDataVAL();
	char getDataVAR();
	



    private:
        node_type node_t;
        data_type data;
        Node* operand1;
        Node* operand2;
	
};

#endif
