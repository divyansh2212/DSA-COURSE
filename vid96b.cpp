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
int sumAtK(node *root, int k)
{
    int sum = 0;
    int level = 0;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *front = q.front();
        q.pop();
        if (front != NULL)
        {
            if (level == k)
            {
                sum += front->data;
            }
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
            level++;
        }
    }

    return sum;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << sumAtK(root, 0) << endl;
    cout << sumAtK(root, 1) << endl;
    cout << sumAtK(root, 2) << endl;
    cout << sumAtK(root, 3) << endl;
    return 0;
}