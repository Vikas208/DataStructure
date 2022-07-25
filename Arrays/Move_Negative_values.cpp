#include <iostream>
using namespace std;
void Move_Negative_Elements(int array[], int n)
{
    // int replace =0;
    // int temp;
    // for(int i=0;i<n;++i){
    //     if(array[i]<0){
    //         temp = array[i];
    //         array[i] = array[replace];
    //         array[replace] = temp;
    //         replace++;
    //     }
    // }

    int temp;
    int pos;
    int index = 0;
    for (int i = 0; i < n; ++i)
    {
        if (array[i] < 0)
        {
            if (i == 0)
            {
                index++;
            }
            else
            {

                pos = i - 1;
                temp = array[i];
                for (int j = pos; j >= index; --j)
                {
                    array[j + 1] = array[j];
                }
                array[index] = temp;
                index++;
            }
        }
   }
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << endl;
    }
}
int main()
{

    int array[] = {-20, 1, 4, -10, -42, -43, 50, -24};
    int n = sizeof(array) / sizeof(array[0]);
    Move_Negative_Elements(array, n);
    return 0;
}