#include <bits-stdc++.h>
using namespace std;
int main()
{

    int array[] = {1, 1, 0, 0, 1, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int k = 2;

    int zerocnt = 0, i = 0, ans = 0;
    for (int j = 0; j < n; ++j)
    {
        if (array[j] == 0)
            zerocnt++;
        while (zerocnt > k)
        {
            if (array[i] == 0)
            {
                zerocnt--;
            }
            i++;
        }

        ans = max(ans, j - i + 1);
    }
    cout << "Answer is: " << ans << endl;
    return 0;
}