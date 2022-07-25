#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

struct Node{
    int val;
    struct Node *next;
}*head,*temp,*ptr;

void printData(){
    ptr = head;
    while(ptr){
        cout<<ptr->val<<"\t";
        ptr = ptr->next;
    }
    cout<<endl;
}
Node* findStartingPoint(){
    Node *slow = head;
    Node *fast = head;

    if(head==NULL || head->next==NULL){
        return NULL;
    }
    slow = slow->next;
    fast = fast->next->next;
    while(fast && fast->next){
        if(slow==fast){
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow!=fast){
        return NULL;
    }

    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
int main(){

    for(int i=1;i<=5;++i){
        temp = new Node();
        if(!temp){
            cout<<"Memory Not Available"<<endl;
        }
        else{
            temp->val = i;
            temp->next = NULL;

            if(!head){
                head = temp;
                ptr = head;
            }
            else{
                ptr->next = temp;
                ptr = temp;
            }
        }
    }
    ptr->next = head->next->next;
    // printData();
    temp = findStartingPoint();
    if(temp==NULL){
        cout<<"LIST HAS NO LOOP"<<endl;
    }
    else{
        cout<<"Starting Point is: "<<temp->val<<endl;
    }
    return 0;
}