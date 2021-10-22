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
node *includeBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = includeBST(root->left, val);
    }
    else
    {
        root->right = includeBST(root->right, val);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    node *root = NULL;
    root = includeBST(root, 5);
    includeBST(root, 1);
    includeBST(root, 3);
    includeBST(root, 4);
    includeBST(root, 2);
    includeBST(root, 7);
    inorder(root);
    return 0;
}