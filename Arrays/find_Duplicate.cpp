#include <iostream>

using namespace std;
bool check(int arr[],int n,int val){
    if(n==0){
        return true;
    }
    int flag=0;
    for(int i=0;i<n;++i){
        if(arr[i]==val){
            flag=1;
            break;
        }
    }
    if(flag==1)
        return false;
    else
        return true;
}
void find_duplicate(int array[], int n)
{
    int index = 0;
    int duplicate[n];
    for (int i=0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {
                if (array[i] == array[j])
                {   
                    if(check(duplicate,index,array[j])){
                        duplicate[index]=array[j];
                        index++;
                    }
                }
            }
        }
    }
    for(int i=0;i<index;++i){
        cout<<duplicate[i]<<endl;
    }
}
int main()
{

    int array[] = {10, 20, 40, 30, 20, 10, 48, 33, 12, 645, 23, 23, 11, 45, 32, 56, 23, 65, 23,65};
    int n = sizeof(array) / sizeof(array[0]);
    find_duplicate(array, n);
    return 0;
}