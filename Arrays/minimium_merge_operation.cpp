#include<iostream>

using namespace std;
void Merge_Operation(int arr[],int n){
    int start=0,last=n-1;
    int operation=0;
    for(int i=0;i<n-1&&start<=last;++i){
        if(arr[start]==arr[last]){
            start++;
            last--;
        }
        else if(arr[start]>arr[last]){
            last--;
            arr[last] += arr[last+1];
            operation++;
        }
        else{
            start++;
            arr[start]+=arr[start-1];
            operation++;
        }
    }
    cout<<operation<<endl;
}
int main(){

    int arr[] = {1,4,5,11,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Merge_Operation(arr,n);
    return 0;
}