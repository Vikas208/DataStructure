#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long
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

void SumReplace(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    SumReplace(root->left);
    SumReplace(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}
void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
int main()
{

    struct Node *head;
    head = new Node(10);
    head->right = new Node(3);
    head->left = new Node(2);
    head->left->left = new Node(4);
    head->left->right = new Node(5);

    Inorder(head);
    cout << endl;
    SumReplace(head);
    Inorder(head);
    return 0;
}
