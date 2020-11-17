#ifndef _LIST_H
#define _LIST_H
#define DataType int
typedef Node& PtrNode;

class Node
{
private:
    DataType Data;
    Node &Next;
public:
    DataType getData(Node& );
    //friend List;
    void setData(Node&, DataType);
    bool isEmpty(Node&);
    Node();
};

class List
{
private:
    Node &Head;
    Node &Tail;
public:

};


#endif