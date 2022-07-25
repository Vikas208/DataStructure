#include<iostream>

using namespace std;
void getmindiff(int *arr,int k,int n){
    
    int sq = k*k;
    for(int i=0;i<n;++i){
        if((arr[i]<=sq)&&((arr[i]+k)>0)){
            arr[i] = arr[i]+k;
        }
        else if((arr[i]>sq)&&((arr[i]-k)>0)){
            arr[i] = arr[i]-k;
        }
        cout<<arr[i]<<endl;
    }

    int min = arr[n-1]-arr[0];
    cout<<"Minimum difference is: "<<min<<endl;
}
int main(){

    int arr[]={3, 9, 12, 16, 20};
    int k=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    getmindiff(arr,k,n);
    return 0;
}