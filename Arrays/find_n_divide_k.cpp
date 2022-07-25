#include<iostream>
#include<vector>
using namespace std;
void find(int arr[],int n,int k){
    vector<int>v;
    for(int i=0;i<n;++i){
        if(arr[i]%k==0){
            v.push_back(arr[i]);
        }
    }
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<endl;
    }
}
int main(){

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    find(arr,n,3);
    return 0;
}