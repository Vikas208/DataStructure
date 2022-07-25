#include<iostream>
#include<vector>

using namespace std;
void sort(int *arr,int n){
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]  = temp;
            }
        }
    }
}
void find_longest_consecutive(int arr[],int n){
    sort(arr,n);
    vector<int> v;
    int flag=0;
    for(int i=0;i<n;++i){
        if(arr[i]!=arr[i+1]){
            v.push_back(arr[i]);
        }
    }
    // for(int i=0;i<v.size();++i){
    //     cout<<v[i]<<endl;
    // }
    int count=0;
    int ans=0;
    for(int i=0;i<v.size();++i){
        
       if(i>0&&v[i]==v[i-1]+1){
           count++;
          
       }
       else{
           count=1;
       }
        ans = max(ans,count);
    }
    cout<<ans;
}
int main(){

    int arr[] = {1,9,3,10,4,20,2};
    int n  =sizeof(arr)/sizeof(arr[0]);
    find_longest_consecutive(arr,n);
    return 0;
}