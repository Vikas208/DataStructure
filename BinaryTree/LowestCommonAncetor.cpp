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
bool getpath(Node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }
    if (getpath(root->left, key, path) || getpath(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!getpath(root, n1, path1) || !getpath(root, n2, path2))
    {
        return -1;
    }
    int pc = 0;
    for (pc; pc < path1.size() && pc < path2.size(); ++pc)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc - 1];
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->left = new Node(9);
    root->left->right = new Node(4);
    root->right = new Node(6);
    root->right->right = new Node(7);

    int n1 = 4, n2 = 7;
    int value = LCA(root, n1, n2);
    if (value == -1)
    {
        cout << "Common Ancentor Not exists" << endl;
    }
    else
    {
        cout << "Common Ancentor is: " << value << endl;
    }
    return 0;
}

/*
        1
       / \
      2   6
     / \   \
    3   4   7
   /
  9
*/