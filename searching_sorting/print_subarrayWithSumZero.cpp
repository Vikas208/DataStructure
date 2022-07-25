#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

void findsubarray(int arr[],int n){
    int flag=0;
    int sum =0;
    for(int i=0;i<n-1;++i){
        sum = sum+arr[i];
        if(sum==0){
            cout<<i<<"..."<<i<<endl;
            flag=1;
        }
        for(int j=i+1;j<n;++j){
            sum = sum+arr[j];
            if(sum==0){
                cout<<i<<"..."<<j<<endl;
                flag=1;
            }
        }
        sum=0;
    }
    if(flag==0){
        cout<<"No Such Element is found"<<endl;
    }
}
int main(){

    int arr[] = {-3,3,2,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    findsubarray(arr,n);
    return 0;
}