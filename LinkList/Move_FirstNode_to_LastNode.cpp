#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int val;
    struct Node *next;
}*head,*temp,*ptr;

void printData(){
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->val<<"\t";
        ptr=ptr->next;
    }
    cout<<endl;
}
void MoveElement(){
    ptr = head;
    Node *prev = NULL;

    while(ptr->next!=NULL){
        prev = ptr;
        ptr = ptr->next;
    }
    temp = head;
    ptr->next = head->next;
    temp->next = NULL;
    prev->next = temp; 

    head = ptr;

}
int main(){


    for(int i=1;i<=5;++i){
        temp = new Node();
        if(!temp)
            cout<<"Error";
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
    printData();
    MoveElement();
    printData();
    return 0;
}