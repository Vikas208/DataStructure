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
void LevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    root->right = new Node(50);
    root->right->left = new Node(20);
    root->right->right = new Node(30);

    LevelOrder(root);
    return 0;
}
/*
        10
        / \ 
       20  50
      /  \ / \
     30  4020 30
*/