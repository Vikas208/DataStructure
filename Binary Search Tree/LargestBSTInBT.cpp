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
struct Info
{
    int min;
    int max;
    int ans;
    int size;
    bool isBST;
};
Info LargestBSTInBT(Node *root)
{
    if (root == NULL)
    {
        return {INT_MIN, INT_MAX, 0, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {root->data, root->data, 1, 1, true};
    }
    else
    {
        Info l = LargestBSTInBT(root->left);
        Info r = LargestBSTInBT(root->right);

        Info curr;
        curr.size = (1 + l.size + r.size);
        if (l.isBST && r.isBST && l.max < root->data && r.min > root->data)
        {
            curr.min = min(l.min, min(r.min, root->data));
            curr.max = max(r.max, max(l.max, root->data));

            curr.ans = curr.size;
            curr.isBST = true;

            return curr;
        }
        curr.ans = max(l.ans, r.ans);
        curr.isBST = false;
        return curr;
    }
}
int main()
{

    Node *root = new Node(10);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right = new Node(20);
    root->right->right = new Node(30);

    cout << "largest BST in BT is: " << LargestBSTInBT(root).ans << endl;
    return 0;
}