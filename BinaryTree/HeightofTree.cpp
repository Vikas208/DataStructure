#include <bits-stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
int HeightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(HeightOfTree(root->left), HeightOfTree(root->right)) + 1;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    cout << "Heigth Of Tree is: " << HeightOfTree(root);
    return 0;
}