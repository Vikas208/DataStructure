#include <bits/stdc++.h>

using namespace std;
void sort(int *arr, int n)
{
    int temp, ptr;
    for (int i = 0; i < n - 1; ++i)
    {
        temp = arr[i + 1];
        ptr = i;
        while (ptr >= 0 && temp < arr[ptr])
        {
            arr[ptr + 1] = arr[ptr];
            ptr--;
        }
        arr[ptr + 1] = temp;
    }
    // for(int i=0;i<n;++i){
    //     cout<<arr[i]<<endl;
    // }
}
void Triplet(int arr[], int n, int s)
{
    sort(arr, n);
    for (int i = 0; arr[i] < s && i < n - 2; ++i)
    {

        for (int j = i + 1; arr[j] < s && j < n - 1; ++j)
        {

            for (int k = j + 1; arr[k] < s && k < n; ++k)
            {

                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }
}
int main()
{

    int arr[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int n = sizeof(arr) / sizeof(arr[0]);
    Triplet(arr, n, sum);
    return 0;
}