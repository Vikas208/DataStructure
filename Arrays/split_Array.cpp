#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void SplitArray(int *arr,int n,int k){
    
    while(k--){
        int temp = arr[0];
        for(int i=1;i<n;++i){
            arr[i-1]=arr[i];
        }
        arr[n-1] = temp;
    }
}
int main(){

    int array[] = {10,12,14,16,20};
    int n = sizeof(array)/sizeof(array[0]);

    printArray(array,n);
    SplitArray(array,n,2);
    printArray(array,n);
    return 0;
}