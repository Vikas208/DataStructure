#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int n)
    {
        data = n;
        prev = NULL;
        next = NULL;
    }
};
void insert(Node **head, int val)
{
    Node *temp = new Node(val);
    if ((*head) == NULL)
    {
        (*head) = temp;
    }
    else
    {
        temp->next = (*head);
        (*head)->prev = temp;
        (*head) = temp;
    }
}
void printList(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    for (Node *i = root; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
    cout << endl;
}

Node *sortList(Node *head)
{
    Node *temp, *ptr;
    for (Node *i = head->next; i != NULL; i = i->next)
    {
        Node *j = i;
        while (j->prev != NULL && j->data < j->prev->data)
        {
            Node *temp = j->prev->prev;
            Node *temp2 = j->prev;
            Node *temp3 = j->next;
            j->prev->next = temp3;
            j->prev->prev = j;
            j->prev = temp;
            j->next = temp2;

            if (temp != NULL)
            {
                temp->next = j;
            }
            if (temp3 != NULL)
            {
                temp3->prev = temp2;
            }
        }
        if (j->prev == NULL)
        {
            head = j;
        }
    }
    return head;
}
int main()
{
    Node *head = NULL;

    insert(&head, 3);
    insert(&head, 6);
    insert(&head, 2);
    insert(&head, 12);
    insert(&head, 56);
    insert(&head, 8);

    printList(head);
    head = sortList(head);
    printList(head);
    return 0;
}