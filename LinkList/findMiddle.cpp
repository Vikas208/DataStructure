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
Node *FindMiddle(Node *head)
{
    // First Apporoach
    vector<Node *> A = {head};
    while (A.back()->next != NULL)
        A.push_back(A.back()->next);

    return A[A.size() / 2];
}
Node *MiddleElement(Node *head)
{
    // Second Apporoach
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    cout << "Middle Element Is[First Apporoach]: " << FindMiddle(head)->val << endl;
    cout << "Middle Element Is[Second Apporoach]: " << MiddleElement(head)->val << endl;
    return 0;
}