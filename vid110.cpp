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
node *constructBST(int preorder[], int *preorderidx, int min, int max, int key, int n)
{
    if (*preorderidx >= n)
    {
        return NULL;
    }

    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderidx = *preorderidx + 1;
        if (*preorderidx < n)
        {
            root->left = constructBST(preorder, preorderidx, min, key, preorder[*preorderidx], n);
        }
        if (*preorderidx < n)
        {
            root->right = constructBST(preorder, preorderidx, key, max, preorder[*preorderidx], n);
        }
    }
    return root;
}
void printpreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main()
{
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderidx = 0;
    node *root = constructBST(preorder, &preorderidx, INT_MIN, INT_MAX, preorder[0], n);
    printpreorder(root);
    return 0;
}