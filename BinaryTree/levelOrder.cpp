#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

struct Node{
    int val;
    struct Node *left;
    struct Node *right;

    Node(int n){
        val = n;
        left = NULL;
        right = NULL;
    }
};
void LevelOrder(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *node = q.front();
        q.pop();
        cout<<node->val<<"\t";
        if(node->left!=NULL){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
    }
}
int main(){

    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);

    LevelOrder(root);
    return 0;
}