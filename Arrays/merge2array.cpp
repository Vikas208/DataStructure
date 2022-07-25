#include <iostream>

using namespace std;
void merge(int *arr, int *arr2, int n1, int n2)
{
    int last_changed_index = n2-1;
    int i=n1-1,j=n2-1;
    int pos,flag=0;
    repeat:while(arr2[j]<arr[i]&&j>=0&&i>=0){
        i--;
        flag=1;
    }
    if(flag==0&&(i>=0&&j>=0)){
        j--;
        last_changed_index -=1;
        flag=0;
        goto repeat;
    }
    if(i>=0||j>=0){
        pos = i+1;
        int temp = arr2[j];
        arr2[j] = arr[n1-1];
        for(int k=n1-2;k>=pos&&pos>=0;--k){
            arr[k+1]=arr[k];
        }
        arr[pos]=temp;i
        last_changed_index--;
        j--;
        goto repeat;
    }

}
void print(int arr[],int arr2[],int n1,int n2){
    for(int i=0;i<n1;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;++i){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    int arr[] = {1, 3, 5, 7,8,9,10,20};
    int arr2[] = {0, 2, 6, 8, 9,15,20,25};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr[0]);
    print(arr,arr2,n1,n2);
    merge(arr, arr2, n1, n2);
    print(arr,arr2,n1,n2);
    return 0;
}
