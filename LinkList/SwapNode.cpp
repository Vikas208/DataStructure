#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
void printList(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->val << "\t";
        ptr = ptr->next;
    }
    cout << endl;
}

Node *swapList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head->next->next;
    head->next->next = head;
    head = head->next;

    head->next->next = swapList(temp);

    return head;
}
int main()
{
    struct Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printList(head);
    head = swapList(head);
    printList(head);

    return 0;
}