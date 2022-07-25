#include <bits-stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
bool CheckBST(Node *root, Node *min, Node *max)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }
    bool leftBST = CheckBST(root->left, min, root);
    bool rightBST = CheckBST(root->right, root, max);

    return leftBST && rightBST;
}
int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);

    if (CheckBST(root, NULL, NULL))
    {
        cout << "Valid BST" << endl;
    }
    else
    {
        cout << "Not Valid BST" << endl;
    }
    return 0;
}