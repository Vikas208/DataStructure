#include<iostream>

using namespace std;
void findsubarray(int arr[],int n){
    int sum=0,flag=1;
    for(int i=0;i<n;++i){
        sum=sum+arr[i];
        if(sum==0){
                // cout<<arr[i]<<","<<arr[j]<<endl;
                cout<<"Index: "<<i<<","<<i<<endl;
                flag=0;
            }
        for(int j=i+1;j<n;++j){
            sum = sum+arr[j];
            if(sum==0){
                // cout<<arr[i]<<","<<arr[j]<<endl;
                cout<<"Index: "<<i<<","<<j<<endl;
                flag=0;
            }
        }
            sum=0;
    }
    if(flag==1){
        cout<<"!No such Sub array Exist"<<endl;
    }
}
int main(){

    int arr[] = {-3,2,3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    findsubarray(arr,n);
    return 0;
}