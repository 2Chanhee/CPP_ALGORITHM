# ifndef NODE_H
# define NODE_H
typedef int DataType;
typedef Node *PtrNode;

class Node
{
    //friend class List;
private:
    DataType data;
    PtrNode next;
    PtrNode before;

public:
    Node(DataType value, PtrNode nxt, PtrNode bfr);
    Node(DataType value, PtrNode nxt);

    DataType getData() {return data;}
    PtrNode getNext()  {return next;}
    PtrNode getBefor() {return before;}
};

class List
{
private:
    PtrNode head;
    PtrNode tail;
    int size;

public:
    List();
    void PushBack();
};
# endif