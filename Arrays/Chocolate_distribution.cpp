#include<iostream>

using namespace std;
void sort(int *arr,int n){
    int temp;
    int ptr;
    for(int i=0;i<n-1;++i){
        temp = arr[i+1];
        ptr = i;
        while(temp<arr[ptr]&&ptr>=0){
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr+1]=temp;
    }
}
int finddifference(int *arr,int n,int m){
    
    if(n==0||m==0){
        return 0;
    }
    if(n<m){
        return -1;
    }
    sort(arr,n);
    int min = INT16_MAX;
    int diff;
    for(int i=0;i+m-1<n;++i){
        diff = arr[i+m-1]-arr[i];
        if(diff<min){
            min = diff;
            // cout<<arr[i]<<endl;
        }
    }
    // for(int i=0;i<n;++i){
    //     cout<<arr[i]<<endl;
    // }
    return min;
}
int main(){

    int arr[] = {12,4,7,9,2,23,25,41,30,40,28,42,30,44,48,43,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m=7;
    cout<<"Difference is:"<<finddifference(arr,n,m);
    return 0;
}
// 2
// 4 
// 7 
// 9 
// 12
// 23
// 25
// 28
// 30
// 30
// 40
// 41
// 42
// 43
// 44
// 48
// 50