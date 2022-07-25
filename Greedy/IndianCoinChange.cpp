#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
int main()
{

    int arr[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int rupee;
    cin >> rupee;

    int ans = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + 1, greater<int>());
    for (int i = 0; i < size; ++i)
    {
        ans += rupee / arr[i];
        rupee -= rupee / arr[i] * arr[i];
    }
    cout << "Answer is: " << ans << endl;
    return 0;
}