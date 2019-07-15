#include <iostream>
#include "NumberList .h"

using namespace std;

void NumberList::appendNode(double num)
{
    ListNode *new_node;
    ListNode *nodeptr;

    new_node = new ListNode;
    new_node->value= num;
    new_node->next= nullptr;

    if(!head)
        head = new_node;
    else
    {
        nodeptr = head;

        while(nodeptr->next)
            nodeptr= nodeptr->next;

        nodeptr->next = new_node;
    }
}

void NumberList::displayList() const
{
    ListNode *nodeptr;

    nodeptr = head;

    while(nodeptr)
    {
        cout << " Value: " << nodeptr->value << endl;

        nodeptr = nodeptr->next;
    }
}
