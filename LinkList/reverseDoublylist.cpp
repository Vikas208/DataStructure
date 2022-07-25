#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *pre;

    Node(int n)
    {
        data = n;
        next = pre = NULL;
    }
};

void printList(Node *head)
{

    while (head->next != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << head->data << " ";
    cout << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->pre;
    }
    cout << endl;
}
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *temp = NULL;

    while (curr != NULL)
    {
        temp = curr->pre;
        curr->pre = curr->next;
        curr->next = temp;
        curr = curr->pre;
    }
    if (temp != NULL)
    {
        head = temp->pre;
    }
    return head;
}
// NULL<-1<=>2<=>3<=>4->NULL
int main()
{
    Node *head = new Node(10);
    head->pre = NULL;
    head->next = new Node(20);
    head->next->pre = head;
    head->next->next = new Node(30);
    head->next->next->pre = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->pre = head->next->next;
    head->next->next->next->next = NULL;

    printList(head);
    head = reverse(head);
    printList(head);
    return 0;
}