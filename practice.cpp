#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val, next = NULL;
    }
};
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *new_head = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}
node *reverseIter(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;

        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
void deletion(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
        return;
    if (head->next == NULL || head->data == val)
    {
        deletion(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "No data!" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 0);
    insertAtHead(head, -1);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    deletion(head, -1);
    display(head);
    return 0;
}