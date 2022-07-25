#include<iostream>

using namespace std;
void is_subset(int arr[],int arr2[],int n1,int n2){
    int flag=0;
    for(int i=0;i<n2;++i){
        for(int j=0;j<n1;++j){
            if(arr2[i]==arr[j]){
                flag++;
                break;
            }
        }
    }
    if(flag==n2){
        cout<<"YES,ARRAY2 IS SUBSET OF ARRAY1"<<endl;
    }
    else{
        cout<<"NO,ARRAY2 NOT SUBSET OF ARRAY1"<<endl;
    }
}
int main(){

    int arr[] = {1,5,4,2,3,6};
    int arr2[] = {3,4,2,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    is_subset(arr,arr2,n,n2);
    return 0;
}