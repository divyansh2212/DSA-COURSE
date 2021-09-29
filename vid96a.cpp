// Level Order Traversal
#include <iostream>
#include <queue>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val, left = NULL, right = NULL;
    }
};
void levelorderPrint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *front = q.front();
        q.pop();
        if (front != NULL)
        {
            cout << front->data << " ";
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    node *root = new node(3);
    root->left = new node(4);
    root->right = new node(5);
    root->left->left = new node(6);
    root->left->right = new node(7);
    root->right->left = new node(8);
    root->right->right = new node(9);
    levelorderPrint(root);
    return 0;
}