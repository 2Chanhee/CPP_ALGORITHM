#include "List.hpp"
#include <iostream>

DataType Node::getData()
{
    return Data;
}

void Node::setData(DataType temp)
{
    Data = temp;
}

bool Node::isEmpty()
{
    return Empty;
}

Node::Node()
{
    Empty = true;
}


Node::Node(DataType temp)
{
    Empty = false;
    Data = temp;
}

Node::Node(DataType temp, Node* NextNode)
{
    Empty = false;
    Data = temp;
    Next = NextNode;
}