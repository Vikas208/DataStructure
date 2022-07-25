#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *constructTree(int pre[],int *index,int low,int high,int size){
    if(*index>=size || low>high){
        return NULL;
    }
    Node *root  = new Node(pre[*index]);
    *index = *index+1;
    if(low==high){
        return root;
    }
    int i;
    for(i=low;i<=high;++i){
        if(pre[i]>root->data){
            break;
        }
    }
    root->left = constructTree(pre,index,*index,i-1,size);
    root->right = constructTree(pre,index,i,high,size);

    return root;
}
Node* createTree(int pre[],int n){
    int preIndex = 0;
    return constructTree(pre,&preIndex,0,n-1,n);
}
void Inorder(Node *node){
    if(node==NULL){
        return;
    }
    Inorder(node->left);
    cout<<node->data<<"\t";
    Inorder(node->right);
}
int main(){

    Node *root;
    int pre[] = {10, 5, 1, 7, 40, 50};
    int n = sizeof(pre)/sizeof(pre[0]);
    root = createTree(pre,n);
    Inorder(root);
    return 0;
}
/*
     10
    /  \
   5    40
  / \    \
 1  7    50

*/