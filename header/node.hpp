# ifndef NODE_H
# define NODE_H
typedef int DataType;
//typedef Node *PtrNode;

class Node
{
private:
    DataType data;
    Node *next;
    Node *before;

public:
    Node(DataType value);
    Node(DataType value, Node *nxt);
    Node(DataType value, Node *nxt, Node *bfr);
    
    DataType getData() {return data;}
    Node *getNext()  {return next;}
    Node *getBefor() {return before;}

    void link2front(Node *target);
    void link2rear(Node *target);
};
# endif