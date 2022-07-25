#include <bits-stdc++.h>

using namespace std;
int main()
{
    priority_queue<int, vector<int>> h;
    h.push(5);
    h.push(10);
    h.push(3);

    priority_queue<int, vector<int>> ptr = h;

    while (!ptr.empty())
    {
        cout << ptr.top() << "\t";
        ptr.pop();
    }
    cout << endl;
    cout << h.top() << endl;
    h.pop();
    cout << h.top() << endl;

    return 0;
}