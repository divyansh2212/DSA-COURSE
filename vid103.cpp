// Shortest Distance Btw 2 Nodes

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
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *lLCA = LCA(root->left, n1, n2);
    node *rLCA = LCA(root->right, n1, n2);
    if (lLCA && rLCA)
    {
        return root;
    }
    if (lLCA == NULL && rLCA == NULL)
    {
        return NULL;
    }
    if (lLCA != NULL)
    {
        return lLCA;
    }

    return rLCA;
}
int findDist(node *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }
    int lef = findDist(root->left, k, dist + 1);
    if (lef != -1)
    {
        return lef;
    }

    int righ = findDist(root->right, k, dist + 1);
    return righ;
}
int distbtwNodes(node *root, int n1, int n2)
{
    node *lca = LCA(root, n1, n2);

    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);
    return d1 + d2;
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

    int ans = distbtwNodes(root, 1, 7);
    cout << ans;
    return 0;
}