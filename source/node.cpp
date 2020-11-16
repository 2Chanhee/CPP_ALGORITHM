# include "../header/node.hpp"

Node::Node(DataType value)
{
    data = value;
    next = nullptr;
    before = nullptr;
}

Node::Node(DataType value, PtrNode nxt)
{
    data = value;
    next = nxt;
    before = nullptr;
}

Node::Node(DataType value, PtrNode nxt, PtrNode bfr)
{
    data = value;
    next = nxt;
    before = bfr;
}

void Node::link2rear(PtrNode target)
{
    target->before = *this;
    next = target;
}

void Node::link2front(PtrNode target)
{
    target->next = *this;
    before = target;
}