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
int SumAtKLevel(Node *root, int k)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            if (level == k)
                sum = sum + temp->data;

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
            level++;
        }
        else if (level > k)
        {
            break;
        }
    }
    return sum;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);

    int k = 2;
    cout << "Sum at " << k << " Level is: " << SumAtKLevel(root, k);
    return 0;
}
/*
         1
       /  \
      2    3
     / \  / \
    4   5 7  6  
*/