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
    for (int i = 0; i <= end; ++i)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
Node *BuildBinaryTree(int inorder[], int postorder[], int start, int end)
{
    static int idx = end;
    if (start > end)
    {
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node *root = new Node(curr);
    if (start == end)
    {
        return root;
    }
    int pos = search(inorder, start, end, curr);
    root->right = BuildBinaryTree(inorder, postorder, pos + 1, end);
    root->left = BuildBinaryTree(inorder, postorder, start, pos - 1);
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
    int postorder[] = {3, 4, 2, 6, 5, 1};

    Node *root = BuildBinaryTree(inorder, postorder, 0, 5);
    inorderTraverse(root);
    return 0;
}