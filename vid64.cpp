#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
int length(node *head)
{
    node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
int intersectionPoint(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    node *ptr1;
    node *ptr2;
    int d = 0;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {
        if (ptr1 == NULL)
        {
            return -1;
        }

        ptr1 = ptr1->next;
        d--;
    }
    while (ptr1->next != NULL && ptr2->next != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
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
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 0);
    insertAtTail(head1, 10);
    insertAtTail(head1, 20);
    insertAtTail(head1, 30);
    insertAtTail(head1, 40);
    insertAtTail(head1, 50);
    insertAtTail(head2, 4);
    insertAtTail(head2, 5);
    intersect(head1, head2, 4);

    display(head1);
    display(head2);

    cout << intersectionPoint(head1, head2) << endl;

    return 0;
}