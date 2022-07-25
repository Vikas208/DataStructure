#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

struct Node{
    char val;
    struct Node *next;

    Node(char c){
        val = c;
        next=NULL;
    }
}*head,*ptr;

bool isPalindrom(){

    stack<char> s;
    ptr = head;
    while(ptr!=NULL){
        s.push(ptr->val);
        ptr=ptr->next;
    }

    ptr=head;
    while(ptr!=NULL){
        char c = s.top();
        s.pop();
        if(c!=ptr->val){
                return false;
        }
        ptr=ptr->next;
    }
    return true;
}
void printList(){
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->val;
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){

    head = new Node('V');
    head->next = new Node('I');
    head->next->next = new Node('K');
    head->next->next->next = new Node('A');
    head->next->next->next->next = new Node('S');


    printList();
    if(isPalindrom()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}