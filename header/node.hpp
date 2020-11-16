# ifndef NODE_H
# define NODE_H
typedef int DataType;
typedef Node *PtrNode;

class Node
{
private:
    DataType data;
    PtrNode next;
    PtrNode before;

public:
    Node(DataType value);
    Node(DataType value, PtrNode nxt);
    Node(DataType value, PtrNode nxt, PtrNode bfr);
    
    DataType getData() {return data;}
    PtrNode getNext()  {return next;}
    PtrNode getBefor() {return before;}

    void link2front(PtrNode target);
    void link2rear(PtrNode target);
};
# endif