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
}*head;
void printNodes(){
    if(head==NULL){
        cout<<"List Is Empty"<<endl;
        return;
    }
    Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->val<<"\t";
        ptr = ptr->next;
    }
    cout<<endl;
}
void DeleteList(){
    Node *curr = head;
    while(curr!=NULL){
        head = head->next;
        free(curr);
        curr = head;
    }
}
int main(){

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);


    printNodes();
    DeleteList();
    printNodes();
    return 0;
}