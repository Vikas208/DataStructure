#include <bits-stdc++.h>
using namespace std;

void printArray(int a1[], int n, int a2[], int m)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; ++i)
    {
        cout << a2[i] << " ";
    }
    cout << endl;
}
void MergeArray(int a1[], int n, int a2[], int m)
{
    int lasta1 = 0;
    int lasta2 = 0;

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {
            if (a1[i] >= a2[j])
            {
                int temp = a1[i];
                a1[i] = a2[j];
                a2[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
    sort(a1, a1 + n);
    sort(a2, a2 + m);
}
int main()
{
    int arr1[] = {2, 6, 7, 8, 9, 9, 10, 10, 11, 12, 12, 12, 12, 13, 13, 13, 14, 15, 16, 16, 17, 18, 18, 19, 20};
    int arr2[] = {1, 5, 5, 7, 7, 8, 9, 11, 15, 18, 18, 18, 20, 20};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    printArray(arr1, n, arr2, m);
    MergeArray(arr1, n, arr2, m);
    printArray(arr1, n, arr2, m);

    return 0;
}