#ifndef _LIST_H
#define _LIST_H
typedef int DataType;

class Node
{
private:
    DataType Data;
    Node *Next;
    bool Empty;
    bool Linked;
public:
    DataType getData();
    Node *getNext();
    //friend List;
    void setData(DataType);
    void link(Node*);
    bool isEmpty();
    
    //Generator
    Node();
    Node(DataType);
    Node(DataType, Node*);
    
};

class List
{
private:
    Node *Head;
    Node *Tail; // Tail is nullptr
    int Length;
public:
    List();
    List(List*);
    void insert(DataType, int);
    void push(DataType);
    DataType pop();
    DataType searchData();
    void sort();
    void swap();
    void printAllNode();
};

#endif