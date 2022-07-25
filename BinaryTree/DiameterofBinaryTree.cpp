#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

int height(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return 1 + max(height(node->left), height(node->right));
}
int Diameter(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    int lheight = height(node->left);
    int rheight = height(node->right);

    int ldiameter = Diameter(node->left);
    int rdiameter = Diameter(node->right);

    return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}
int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    cout << "Diameter is: " << Diameter(root) << endl;
    return 0;
}