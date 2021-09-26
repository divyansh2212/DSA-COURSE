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
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildTree(vector<int> postorder, vector<int> inorder, int start, int end)
{
    static int idx = postorder.size() - 1;
    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[idx];
    idx--;
    node *root = new node(curr);

    if (start == end)
    {
        return root;
    }

    int pos = search(inorder, start, end, curr);
    root->right = buildTree(postorder, inorder, pos + 1, end);
    root->left = buildTree(postorder, inorder, start, pos - 1);

    return root;
}
void postorderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderprint(root->left);
    postorderprint(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> postorder = {4, 2, 5, 3, 1};
    vector<int> inorder = {4, 2, 1, 5, 3};

    node *root = buildTree(postorder, inorder, 0, inorder.size() - 1);
    postorderprint(root);
    return 0;
}