#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

struct Node{
    int val;
    struct Node *left;
    struct Node *right;

    Node(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
}*head;

void PreOrder(Node *ptr){
    
    if(ptr==NULL){
        return;
    }
    cout<<ptr->val<<"\t";
    PreOrder(ptr->left);
    PreOrder(ptr->right);
}
void InOrder(Node *ptr){
    if(ptr==NULL){
        return;
    }
    InOrder(ptr->left);
    cout<<ptr->val<<"\t";
    InOrder(ptr->right);
}
void PostOrder(Node *ptr){
    if(ptr==NULL){
        return;
    }
    PostOrder(ptr->left);
    PostOrder(ptr->right);
    cout<<ptr->val<<"\t";
}
void InorderIterative(Node *node){

    stack<Node *> s;
    Node *curr = node;
    while(curr!=NULL || !s.empty()){
        if(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
        else{
            curr = s.top();
            s.pop();
            cout<<curr->val<<"\t";
            curr = curr->right;
        }
    }
}
int main(){

    head = new Node(10);
    head->left = new Node(20);
    head->right = new Node(30);
    head->left->left = new Node(40);
    head->left->right = new Node(50);
    head->right->left = new Node(60);
    head->right->right = new Node(70);
    head->right->left->left = new Node(100);
    head->right->right->right = new Node(30);

    cout<<"PreOrder :"<<"\t";
    PreOrder(head);
    cout<<endl;
    cout<<"InOrder :"<<"\t";
    InOrder(head);
    cout<<endl;
    cout<<"InOrder Iterative :"<<"\t";
    InorderIterative(head);
    cout<<endl;
    cout<<"PostOrder :"<<"\t";
    PostOrder(head);
    cout<<endl;
    return 0;
}
/*
          10
         /  \
       20    30
      /  \   / \
     40  50 60  70
            /    \
           100   30

           Preorder = 10 20 40 50 30 60 100 70 30
           Inorder =  40 20 50 10 100 60 30 70 30 
           Postorder = 40 50 20 100 60 30 70 30 10


                if(ptr==NULL){
                    return;
                }
                cout<<ptr->val<<"\t";
                PreOrder(ptr->left);
                PreOrder(ptr->right);
*/