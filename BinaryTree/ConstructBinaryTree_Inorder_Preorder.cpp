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
/*
        1
       / \
      2   5
     / \   \ 
    3   4   6
*/
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; ++i)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
Node *BuildBinaryTree(int inorder[], int preorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node *root = new Node(curr);
    if (start == end)
    {
        return root;
    }
    int pos = search(inorder, start, end, curr);
    root->left = BuildBinaryTree(inorder, preorder, start, pos - 1);
    root->right = BuildBinaryTree(inorder, preorder, pos + 1, end);
}
void inorderTraverse(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraverse(root->left);
    cout << root->data << " ";
    inorderTraverse(root->right);
}
int main()
{
    int inorder[] = {3, 2, 4, 1, 5, 6};
    int preorder[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(inorder) / sizeof(inorder[0]);
    Node *root = BuildBinaryTree(inorder, preorder, 0, n - 1);
    inorderTraverse(root);
    return 0;
}