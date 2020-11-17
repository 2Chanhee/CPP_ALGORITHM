#ifndef _LIST_H
#define _LIST_H
typedef int DataType;

class Node
{
private:
    DataType Data;
    Node *Next;
    bool Empty;
public:
    DataType getData();
    //friend List;
    void setData(DataType);
    bool isEmpty();
    
    //Generator
    Node();
    Node(DataType);
    Node(DataType, Node*);
    
};

class List
{
private:
    Node &Head;
    Node &Tail;
public:
    void push(DataType);
    DataType pop();
    DataType searchData();
    void sort();
    void swap();
    void printAllNode();
};

#endif