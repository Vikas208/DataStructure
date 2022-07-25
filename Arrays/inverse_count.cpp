#include<iostream>

using namespace std;
int inverse_count(int arr[],int n){
    
    int count = 0;
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-1-i;++j){
            if(arr[j]>arr[j+1]){
                count++;
            }
        }
    }
    return count;
}
int main(){

    int arr[] = {3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Inverse count is:"<<inverse_count(arr,n)<<endl;
    return 0;
}