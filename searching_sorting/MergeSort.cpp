#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; ++i)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < n2; ++j)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    MergeSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}