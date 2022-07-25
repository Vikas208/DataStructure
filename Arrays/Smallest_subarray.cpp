#include <iostream>

using namespace std;
void find_Smallest_subarray(int arr[], int n, int sum)
{
    int minimum = INT16_MAX;
    int check = INT16_MAX;
    int s = 0;
    int count, start=0, end=0;
    for (int i = 0; i < n; ++i)
    {
        s = s + arr[i];
        for (int j = i + 1; j < n; ++j)
        {
            if (s > sum)
            {
                count = j - i;
                
            }
            s = s + arr[j];
            if (minimum > count)
            {
                minimum = count;
                start = i;
                end = j;
            }
        }
        s = 0;
    }
    for (int i = start; i <end; ++i)
    {
        cout << arr[i] << endl;
    }
    if(minimum!=check)
        cout << minimum << endl;
    else   
        cout<<"Not Possible"<<endl;
}
int main()
{

    int arr[] = {1,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 8;
    find_Smallest_subarray(arr, n, sum);
    return 0;
}