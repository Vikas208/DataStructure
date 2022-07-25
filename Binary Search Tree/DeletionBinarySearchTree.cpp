#include <bits-stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node *inorderSucc(Node *root)
{
    Node *curr = root;
    while (!curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
Node *deleteNode(Node *root, int key)
{

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main()
{

    /*
            8
           / \ 
          3   10
         /\    \
        1  4    14
                /
               13
     */
    Node *root = new Node(8);
    root->left = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right = new Node(10);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);

    inorder(root);
    root = deleteNode(root, 3);
    cout << endl;
    inorder(root);
    return 0;
}