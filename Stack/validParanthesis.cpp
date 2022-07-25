#include <bits-stdc++.h>

using namespace std;
int main()
{

    vector<char> v = {'[', '{', '}', ']'};

    stack<char> s;

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << "";
    }
    cout << endl;
    int flag = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == '[' || v[i] == '{' || v[i] == '(')
        {
            s.push(v[i]);
        }
        else if (v[i] == ']' && s.top() == '[')
        {
            s.pop();
        }
        else if (v[i] == '}' && s.top() == '{')
        {
            s.pop();
        }
        else if (v[i] == ')' && s.top() == '(')
        {
            s.pop();
        }
        else
        {
            cout << "Not Balanced" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0 && s.size() == 0)
    {
        cout << "Balanced" << endl;
    }
    return 0;
}