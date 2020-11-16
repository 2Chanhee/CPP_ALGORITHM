# include "../header/node.hpp"

Node::Node(DataType value, PtrNode nxt, PtrNode bfr)
{
    data = value;
    next = nxt;
    before = bfr;
}

Node::Node(DataType value, PtrNode nxt)
{
    data = value;
    next = nxt;
}

List::List()
{
    head = nullptr;
    tail = nullptr;
    int size = 0;
}