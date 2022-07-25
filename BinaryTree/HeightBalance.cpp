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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
        10
       /  \
      20  40
      /
     30
*/
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right = new Node(40);

    if (isBalanced(root) == true)
    {
        cout << "Tree is Balanced" << endl;
    }
    else
    {
        cout << "Tree is Not Balanced" << endl;
    }
    return 0;
}