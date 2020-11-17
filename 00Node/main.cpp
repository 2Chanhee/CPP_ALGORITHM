#include "../header/node.hpp"
#include <iostream>

using namespace std;

void printNodes(Node *);

Node *A[10];

int main()
{
    cout << "Hello!";
    cout << "Making List....";
    for (int i = 0; i < 10; i++)
    {
        A[i] = new Node(i);
        if (i !=0)
            A[i+1]->link2front(A[i]);
    }
    
    cout << "Print Data!";
    printNodes(A[0]);
    
    return 0;
}

void printNodes(Node *head)
{
    cout << head->getData();
    if (head->getNext() != nullptr)
        printNodes(head->getNext());
}