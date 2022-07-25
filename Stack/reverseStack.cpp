#include <bits-stdc++.h>

using namespace std;

void InsertAtBottom(stack<int> &s, int temp)
{
    if (s.empty())
    {
        s.push(temp);
        return;
    }
    int t = s.top();
    s.pop();
    InsertAtBottom(s, temp);
    s.push(t);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    InsertAtBottom(s, temp);
}
int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverse(s);

    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        cout << temp << " ";
    }
    return 0;
}