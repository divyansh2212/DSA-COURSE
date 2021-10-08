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
bool getPath(node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }
    if (getPath(root->left, key, path) || getPath(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(node *root, int n1, int n2)
{
    vector<int> path1;
    vector<int> path2;
    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {
        return -1;
    }
    int i;
    for (i = 0; i < path1.size(); i++)
    {
        if (path1[i] != path2[i])
        {
            break;
        }
    }
    return path1[i - 1];
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

    int lca = LCA(root, 2, 7);
    cout << lca;
    return 0;
}