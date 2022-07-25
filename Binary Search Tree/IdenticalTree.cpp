#include <bits-stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool isIdentical(Node *root, Node *root2)
{
    if (root == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        bool con1 = root->data == root2->data;
        bool con2 = isIdentical(root->left, root2->left);
        bool con3 = isIdentical(root->right, root2->right);

        return (con1 && con2 && con3);
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);

    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    isIdentical(root, root2) ? cout << "Identical " : cout << "Not Identical";
    return 0;
}