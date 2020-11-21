#include "List.hpp"
#include <iostream>

// Node Class
// Generator
Node::Node()
{
    Empty = true;
    Linked = false;
    Next = nullptr;
}

Node::Node(DataType temp)
{
    Empty = false;
    Linked = false;
    Data = temp;
    Next = nullptr;
}

Node::Node(DataType temp, Node* NextNode)
{
    Empty = false;
    Linked = true;
    Data = temp;
    Next = NextNode;
}

// Method of Node Class
DataType Node::getData()
{
    return Data;
}

void Node::setData(DataType temp)
{
    Data = temp;
    Empty = false;
}

Node* Node::getNext()
{
    return Next;
}

void Node::setNext(Node *NextNode)
{
    Next = NextNode;
}

void Node::link(Node *NextNode)
{
    Next = NextNode;
    Linked = true;
}

bool Node::isEmpty()
{
    return Empty;
}

//List Class

List::List()
{
    Head = nullptr;
    Tail = nullptr;
}

void insert(DataType temp, int Index)
{
    
}

void List::push(DataType temp)
{
    Node *NewNode = new Node(temp);
    if (this->Head != nullptr)
    {
        NewNode->link(this->Head);
        this->Head = NewNode;
    }
    else
    {
        this->Head = NewNode;
        NewNode->setNext(this->Tail);
    }
}

DataType List::pop()
{
    DataType temp;
    Node *DeletedNode;

    temp = (this->Head)->getData();
    DeletedNode = this->Head;
    (this->Head) = (this->Head)->getNext();
    delete DeletedNode;

    return temp;
}

int List::searchData(DataType temp)
{
    Node *PtrNode = Head->getNext();
    int Index = 1;
    while(Head->getNext() != nullptr)
    {
        if (PtrNode->getData() == temp)
            return Index;
        PtrNode = PtrNode->getNext();
        Index++;
    }
    return 0;
}

void List::sort()
{

}

void List::printAllNode()
{
    Node *PtrNode = Head->getNext();
    while(PtrNode!= nullptr)
    {
        std::cout<<PtrNode->getData()<<" ";
        PtrNode = PtrNode->getNext();
    }
}