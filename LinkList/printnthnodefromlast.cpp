#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

struct Node{
    int val;
    struct Node *next;

    Node(int value){
        val = value;
        next = NULL;
    }
}*head,*ptr;

void printNode(int k){
    ptr=head;
    int len=0;
    while(ptr!=NULL){
        len++;
        ptr = ptr->next;
    }
    if(len<k&&k<0){
        cout<<"Out of List";
        return;
    }
    ptr= head;
    for(int i=1;i<len-k+1;++i){
        ptr = ptr->next;
    }
    cout<<"Value Is: "<<ptr->val;
}
void printData(){
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->val<<"\t";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main(){

    head = new Node(10);
    ptr = head;
    for(int i=20;i<=60;i+=10){
        ptr->next = new Node(i);
        ptr = ptr->next;
    }
    printData();
    printNode(4);
    return 0;
}