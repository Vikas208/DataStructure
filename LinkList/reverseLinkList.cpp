#include <bits-stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *next;
} * head, *temp, *ptr;

void printData()
{
    ptr = head;
    while (ptr != '\0')
    {
        cout << ptr->val << "\t";
        ptr = ptr->next;
    }
    cout << endl;
}

void reverseList()
{
    Node *curr = head;
    Node *pre = '\0';

    while (curr != '\0')
    {
        temp = curr->next;
        curr->next = pre;
        pre = curr;
        curr = temp;
    }
    head = pre;
}

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rest = reverse(head->next);
    head->next->next = head;

    head->next = NULL;
    return rest;
}

//  1 2 3 4 5
int main()
{

    for (int i = 1; i <= 10; ++i)
    {
        temp = new Node();

        if (temp == '\0')
        {
            cout << "No Memory is Available" << endl;
            return 0;
        }
        else
        {
            temp->val = i;
            temp->next = '\0';

            if (head == '\0')
            {
                head = temp;
                ptr = head;
            }
            else
            {
                ptr->next = temp;
                ptr = temp;
            }
        }
    }
    printData();
    head = reverse(head);
    printData();
    return 0;
}
