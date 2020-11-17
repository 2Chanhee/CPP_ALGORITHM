# include "../header/node.hpp"

Node::Node(DataType value)
{
    data = value;
    next = nullptr;
    before = nullptr;
}

Node::Node(DataType value, Node *nxt)
{
    data = value;
    next = nxt;
    before = nullptr;
}

Node::Node(DataType value, Node *nxt, Node *bfr)
{
    data = value;
    next = nxt;
    before = bfr;
}

void Node::link2rear(Node *target)
{
    target->before = this;
    next = target;
}

void Node::link2front(Node *target)
{
    target->next = this;
    before = target;
}