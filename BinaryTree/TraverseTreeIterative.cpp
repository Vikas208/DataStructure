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
void Inorder(Node *node){

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
void PreOrder(Node *node){
    stack<Node *> s;
    Node *curr = node;
    s.push(curr);
    while(!s.empty()){
        curr = s.top();
        s.pop();
        cout<<curr->val<<"\t";

        if(curr->right){
            s.push(curr->right);
        }
        if(curr->left){
            s.push(curr->left);
        }
    }
}
void PostOrder(Node *node){
    stack<Node *> s;
    Node *curr = node;  
    stack<int> res;
    s.push(curr);
    while(!s.empty()){
        Node *curr = s.top();
        s.pop();
        res.push(curr->val);
        if(curr->left){
            s.push(curr->left);
        }
        if(curr->right){
            s.push(curr->right);
        }
    }
    while(!res.empty()){
        cout<<res.top()<<"\t";
        res.pop();
    }
}
int main(){

    head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    head->right->left->left = new Node(10);
    head->right->right->right = new Node(3);

    cout<<"In Order :"<<"\t";
    Inorder(head);
    cout<<endl;
    cout<<"Pre Order :"<<"\t";
    PreOrder(head);
    cout<<endl;
    cout<<"Post Order :"<<"\t";
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