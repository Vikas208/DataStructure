#include <iostream>

using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void replace(int *arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void Rotation(int *arr, int d, int n)
{

    for (int i = 0; i < d; ++i)
    {
        replace(arr, n);
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    Rotation(arr, d, n);
    print(arr, n);
    return 0;
}