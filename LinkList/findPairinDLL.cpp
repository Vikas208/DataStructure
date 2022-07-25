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
        cout << head->data << "<-->";
        head = head->next;
    }
    cout << head->data << "";
    cout << endl;
}
void findPair(Node *head, int target)
{
    Node *last_node = head;
    Node *start = head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }
    Node *temp;
    cout << "---------------Pairs Are---------------- " << endl;
    while (start != last_node)
    {
        temp = last_node;
        while (temp != start)
        {

            if (start->data + temp->data == target)
            {
                cout << "[" << start->data << "," << temp->data << "]"
                     << " , ";
            }
            temp = temp->pre;
        }
        start = start->next;
    }
}
int main()
{
    Node *head = new Node(1);
    head->pre = NULL;
    head->next = new Node(2);
    head->next->pre = head;
    head->next->next = new Node(3);
    head->next->next->pre = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->pre = head->next->next;
    head->next->next->next->next = NULL;

    printList(head);
    findPair(head, 5);
    return 0;
}