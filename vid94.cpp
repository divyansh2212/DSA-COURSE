#include <iostream>
#include <vector>
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
int search(vector<int> inorder, int start, int end, int curr)
{
    for (int i = 0; i < inorder.size(); i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildtree(vector<int> preorder, vector<int> inorder, int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node *root = new node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = search(inorder, start, end, curr);
    root->left = buildtree(preorder, inorder, start, pos - 1);
    root->right = buildtree(preorder, inorder, pos + 1, end);

    return root;
}
void preorderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderprint(root->left);
    preorderprint(root->right);
}
int main()
{
    vector<int> preorder = {1, 2, 4, 3, 5};
    vector<int> inorder = {4, 2, 1, 5, 3};
    node *root = buildtree(preorder, inorder, 0, inorder.size() - 1);
    preorderprint(root);
    return 0;
}