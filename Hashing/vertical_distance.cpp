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
        left = right = NULL;
    }
};

map<int, vector<int>> m;

void getVerticalDistance(Node *head, int hd)
{
    if (head == NULL)
    {
        return;
    }
    m[hd].push_back(head->data);
    getVerticalDistance(head->left, hd - 1);
    getVerticalDistance(head->right, hd + 1);
}
int main()
{
    Node *head = new Node(10);
    head->left = new Node(20);
    head->right = new Node(30);
    head->left->left = new Node(40);
    head->left->right = new Node(50);
    head->right->left = new Node(70);
    head->right->right = new Node(60);
    int hd = 0;
    getVerticalDistance(head, hd);

    map<int, vector<int>>::iterator it;

    for (it = m.begin(); it != m.end(); ++it)
    {
        for (int i = 0; i < (it->second).size(); ++i)
        {
            cout << (it->second)[i] << " ";
        }
        cout << endl;
    }

    return 0;
}