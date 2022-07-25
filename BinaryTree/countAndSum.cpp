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
int countSum(Node *root)
{
    static int sum = 0;
    if (root == NULL)
    {
        return sum;
    }
    sum = sum + root->data;
    countSum(root->left);
    countSum(root->right);

    return sum;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->right = new Node(30);
    root->right->right = new Node(50);
    cout << "Total Sum Is: " << countSum(root) << endl;
    return 0;
}