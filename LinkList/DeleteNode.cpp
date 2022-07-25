#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

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
    cout << head->val << " ";
    while (ptr != head)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}
Node *DeleteNode(int key, Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->val == key && head->next == head)
    {
        free(head);
        return NULL;
    }
    if (head->val == key)
    {
        Node *temp = head->next;
        Node *ptr = head;
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        free(head);
        head = temp;
        ptr->next = head;

        return head;
    }

    Node *ptr = head, temp;
    while (ptr->next != head && ptr->next->val != key)
    {
        ptr = ptr->next;
    }

    if (ptr->next->val == key)
    {
        temp = ptr->next;
        ptr->next = temp->next;
        free(temp);
    }
    else
    {
        cout << "No such KeyFound" << endl;
    }
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(20);
    head->next->next->next->next->next = head;

    printList(head);
    cout << endl;
    head = DeleteNode(20, head);
    printList(head);
    cout << endl;
    return 0;
}