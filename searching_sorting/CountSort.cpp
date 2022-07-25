#include <bits-stdc++.h>

using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int findMaximum(int *array, int n)
{
    int maxEle = array[0];
    for (int i = 1; i < n; ++i)
    {
        if (maxEle < array[i])
        {
            maxEle = array[i];
        }
    }
    return maxEle;
}
void countSort(int *array, int n)
{

    int maxEle = findMaximum(array, n);
    int *countArr = new int(maxEle + 1);
    memset(countArr, 0, sizeof(countArr));

    for (int i = 0; i <= maxEle; ++i)
    {
        countArr[i] = 0;
    }
    for (int i = 0; i < n; ++i)
    {
        countArr[array[i]]++;
    }
    int index = 0;
    for (int i = 0; i <= maxEle; ++i)
    {
        if (countArr[i] == 0)
        {
            continue;
        }
        while (countArr[i]--)
        {
            array[index] = i;
            index++;
        }
    }
}
int main()
{

    int array[] = {9, 5, 2, 10, 2, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printArray(array, n);
    countSort(array, n);
    printArray(array, n);
    return 0;
}