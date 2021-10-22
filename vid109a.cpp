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
node *searchinBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data > key)
    {
        return searchinBST(root->left, key);
    }
    return searchinBST(root->right, key);
}
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    return 0;
}