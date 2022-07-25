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
int DiameterOfTree(Node *root, int *h)
{
    if (root == NULL)
    {
        *h = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ldiameter = DiameterOfTree(root->left, &lh);
    int rdiameter = DiameterOfTree(root->right, &rh);

    int currentDiameter = lh + rh + 1;
    *h = max(lh, rh) + 1;
    return max(currentDiameter, max(ldiameter, rdiameter));
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    int height = 0;
    cout << "Diameter of Tree Is: " << DiameterOfTree(root, &height);
    return 0;
}