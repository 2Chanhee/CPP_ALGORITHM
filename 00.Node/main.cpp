#include "../header/node.hpp"
#include <iostream>

using namespace std;

void printNodes(PtrNode );

int main()
{
    PtrNode A[10];
    for (int i = 0; i < 10; i++)
    {
        A[i] = new Node(i);
        if (i !=0)
            A[i+1]->link2front(A[i]);
    }
    
    printNodes(A[0]);
    
    
    return 0;
}

void printNodes(PtrNode head)
{
    cout << head->data;
    if (head->next != nullptr)
        printNodes(head->next);
}