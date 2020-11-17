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

Node *getNext();
{
    return Next;
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

}
List::List(List*)
{

}

void insert(DataType temp, int Index);
void List::push(DataType temp)
{
    Node *NewNode = new Node(temp);
    if (this->Head != nullptr)
    {
        NewNode->link(this->Head);
        this->Head = NewNode;
    }
    else
        this->Head = NewNode;
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
DataType List::searchData()
{

}
void List::sort()
{

}
void List::swap()
{

}
void List::printAllNode()
{
    
}