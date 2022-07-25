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
void RightSubtree(Node *root)
{
    vector<int> v;
    if (!root)
    {
        return ;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            // cout<<"N value is: "<<n<<endl;
            Node *temp = q.front();
            q.pop();
            if (n == 0)
            {
                v.push_back(temp->data);
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
    for(int i:v){
        cout<<i<<"\t";
    }
}
void preorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << "\t";
    preorder(node->left);
    preorder(node->right);
}
int main()
{

    Node *head;
    head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->right->left = new Node(4);
    head->left->right = new Node(5);
    head->right->right = new Node(6);

    preorder(head);
    cout << endl;
    RightSubtree(head);
    return 0;
}
