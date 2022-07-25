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
void zigzagTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    bool lefttoright = true;
    stack<Node *> currentLevel;
    stack<Node *> nextLevel;

    currentLevel.push(root);
    while (!currentLevel.empty())
    {
        Node *temp = currentLevel.top();
        currentLevel.pop();
        cout << temp->data << " ";
        if (lefttoright)
        {
            nextLevel.push(temp->left);
            nextLevel.push(temp->right);
        }
        else
        {
            nextLevel.push(temp->right);
            nextLevel.push(temp->left);
        }

        if (currentLevel.empty())
        {
            lefttoright = !lefttoright;
            swap(currentLevel, nextLevel);
        }
    }
}
/*
    10
    /\
   5  20
  / \ / \
 2  715  40
*/
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->right = new Node(20);
    root->right->right = new Node(40);
    root->right->left = new Node(15);

    preOrder(root);
    cout << endl;
    zigzagTraversal(root);
    return 0;
}