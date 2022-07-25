#include <bits-stdc++.h>

using namespace std;

priority_queue<int, vector<int>> prmax;
priority_queue<int, vector<int>, greater<int>> prmin;

void insert(int x)
{
    if (prmax.size() == prmin.size())
    {
        if (prmax.size() == 0)
        {
            prmax.push(x);
            return;
        }
        if (x < prmax.top())
        {
            prmax.push(x);
        }
        else
        {
            prmin.push(x);
        }
    }
    else
    {
        if (prmax.size() > prmin.size())
        {
            if (x >= prmax.top())
            {
                prmin.push(x);
                return;
            }
            else
            {
                int temp = prmax.top();
                prmax.pop();
                prmin.push(temp);
                prmax.push(x);
            }
        }
        else
        {
            if (x <= prmin.top())
            {
                prmax.push(x);
                return;
            }
            else
            {
                int temp = prmin.top();
                prmin.pop();
                prmax.push(temp);
                prmin.push(x);
            }
        }
    }
}
int findMedian()
{
    if (prmax.size() == prmin.size())
    {
        return float((prmax.top() + prmin.top()) / 2.0);
    }
    else if (prmax.size() > prmin.size())
    {
        return prmax.top();
    }
    else
    {
        return prmin.top();
    }
}
int main()
{
    insert(10);
    cout << findMedian() << endl;
    insert(20);
    cout << findMedian() << endl;
    insert(15);
    cout << findMedian() << endl;
    insert(5);
    cout << findMedian() << endl;
    insert(21);
    cout << findMedian() << endl;
    insert(30);
    cout << findMedian() << endl;
    return 0;
}