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
void insert(Node **head, int data)
{
    Node *temp = new Node(data);

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
void printList(Node *head)
{

    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->data << " ";
    }
}
int findPairs(Node *head, int target)
{

    unordered_map<int, Node *> um;
    int count = 0;
    for (Node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        um[ptr->data] = ptr;
    }

    for (Node *ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
    {
        for (Node *ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
        {
            int sum = ptr1->data + ptr2->data;

            if (um.find(target - sum) != um.end() && um[target - sum] != ptr1 && um[target - sum] != ptr2)
            {

                count++;
            }
        }
    }
    return count / 3;
}
int main()
{

    Node *head = NULL;
    insert(&head, 10);
    insert(&head, 12);
    insert(&head, 13);
    insert(&head, 14);
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);

    int target = 21;

    printList(head);
    cout << "\nNumber Of Pairs are: " << findPairs(head, target);
    return 0;
}