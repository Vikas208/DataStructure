#include <bits-stdc++.h>

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
void printList(Node *head)
{
    Node *ptr = head->next;
    cout << head->val << "->";
    while (ptr != head)
    {
        cout << ptr->val << "->";
        ptr = ptr->next;
    }
}
void FindHalves(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *slow = head;
    Node *fast = head;

    if (head == NULL)
    {
        return;
    }
    while (fast->next != head && fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    if (fast->next->next == head)
    {
        fast = fast->next;
    }
    *head1_ref = head;
    if (head->next != head)
    {
        *head2_ref = slow->next;
    }
    fast->next = slow->next;
    slow->next = head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head;

    printList(head);
    cout << endl;
    Node *head1_ref, *head2_ref;
    FindHalves(head, &head1_ref, &head2_ref);
    printList(head1_ref);
    cout << endl;
    printList(head2_ref);
    cout << endl;
    return 0;
}