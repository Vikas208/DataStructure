#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int n){
        data = n;
        left = NULL;
        right = NULL;
    }
};
void Inorder(Node *node){
    if(node==NULL){
        return ;
    }
    Inorder(node->left);
    cout<<node->data<<"\t";
    Inorder(node->right);
}

void MirrorTree(Node *node,Node **mirror){
    if(node==NULL){
        mirror =NULL;
        return;
    }
    *mirror = new Node(node->data);
    MirrorTree(node->left,&((*mirror)->right));
    MirrorTree(node->right,&((*mirror)->left));
}
int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node *mirror = NULL;
    Inorder(root);
    cout<<endl;
    MirrorTree(root,&mirror);
    Inorder(mirror);
    
    return 0;
}
/*
        ---Binary Tree---

            1
           / \
          2   3
         / \
        4   5

        ---Mirror of Binary Tree---

            1
           / \
          3   2
             / \
            5   4
*/