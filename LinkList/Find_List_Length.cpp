#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

struct Node{
    int val;
    struct Node *next;

    Node(int num){
        val = num;
        next = NULL;
    }
}*head,*ptr;

void printNode(){
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->val<<"\t";
        ptr= ptr->next;
    }
    cout<<endl;
}
int findLength(){
    ptr= head;
    int length=0;
    while(ptr!=NULL){
        length++;
        ptr = ptr->next;
    }
    return length;
}
int findLength2(Node *ptr,int l){
    int n = l;
    if(ptr==NULL){
        return n;
    }
    n++;
    findLength2(ptr->next,n);
}
int main(){

    head = new Node(10);
    ptr = head;
    for(int i=20;i<=100;i+=10){
        ptr->next = new Node(i);
        ptr = ptr->next;
    }
    printNode();
    cout<<"List Length is (Iterative) Method : "<<findLength()<<endl;
    cout<<"List Length is (Recursive) Method : "<<findLength2(head,0)<<endl;
    return 0;
}