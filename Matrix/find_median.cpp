#include<iostream>

using namespace std;
void sort(int *arr,int n){
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void find_median(int arr[][3],int row,int column){
    int n = row*(column-1);
    int array[n];
    int index=0;
    for(int i=0;i<row;++i){
        for(int j=0;j<column-1;++j){
            cout<<arr[i][j]<<"  ";
            array[index] = arr[i][j];
            index++;
        }
        cout<<endl;
    }
    for(int i=0;i<n;++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    sort(array,index);
    for(int i=0;i<index;++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int median = index/2;
    cout<<"Median of array is: "<<array[median]<<endl;
}
int main(){

    int arr[][3] ={{1,3,5},{2,6,9},{3,6,9}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int column = sizeof(arr[0])/row;
    find_median(arr,row,column);
    return 0;
}