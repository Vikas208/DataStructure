#include <bits-stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};
void LeftSubtree(Node *node)
{

    if (!node)
    {
        return;
    }
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; ++i)
        {
            Node *temp = q.front();
            q.pop();
            if (i == 1)
            {
                cout << temp->data << " ";
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{

    Node *head;
    head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->right->left = new Node(5);

    LeftSubtree(head);
    return 0;
}
/*
                1
               / \
              2   3 
             /   /
            4   5
*/