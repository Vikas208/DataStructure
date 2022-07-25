#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node (int n){
        data = n;
        next = NULL;
    }
};
Node *rotate(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;

    while (k-- && head->next != NULL)
    {
        head = head->next;
    }
    temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
void printData(Node *head){
    Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<"\t";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{

    Node *head = new Node(10);
    Node *ptr = head;
    for(int i=20;i<=60;i+=10){
        ptr->next = new Node(i);
        ptr = ptr->next;
    }
    printData(head);
    head = rotate(head,3);
    printData(head);
    return 0;
}