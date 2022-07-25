#include <bits-stdc++.h>

using namespace std;

int findMiddle(stack<int> s)
{
    stack<int> r;
    while (!s.empty())
    {
        r.push(s.top());
        s.pop();
    }
    int index = -1;
    int middlepos = r.size() / 2;
    int middleEle = r.top();
    while (index != middlepos)
    {
        index++;
        middleEle = r.top();
        r.pop();
    }
    return middleEle;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(20);
    s.push(60);
    s.push(40);
    s.push(70);

    // cout << "Size : " << s.size() << endl;

    cout << findMiddle(s);
    return 0;
}