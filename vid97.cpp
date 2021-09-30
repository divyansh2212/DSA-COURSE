#include <iostream>
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
int sumNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}
int numberOfNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return numberOfNodes(root->left) + numberOfNodes(root->right) + 1;
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
    cout << numberOfNodes(root) << endl;
    cout << sumNodes(root) << endl;
    return 0;
}