#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[a[i]]++;
    }
    int count = 0;
    for (auto i : m)
    {
        if (i.second > size / 2)
        {
            count = 1;
            return i.first;
        }
    }
    if (count == 0)
    {
        return -1;
    }
}

int main()
{

    int arr[] = {1, 3, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Majority Element is: " << majorityElement(arr, size);
    return 0;
}
