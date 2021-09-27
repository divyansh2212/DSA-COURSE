// Stacks using Linked Lists

#include <iostream>
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
class stack
{
    node *head;
    int s;

public:
    stack()
    {
        head = NULL, s = 0;
    }
    void push(int val)
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp;
        s++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "No element to pop out!" << endl;
        }
        head = head->next;
        s--;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "No element in the top!";
            return -1;
        }
        return head->data;
    }
    int size()
    {
        return s;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    cout << st.empty() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    return 0;
}