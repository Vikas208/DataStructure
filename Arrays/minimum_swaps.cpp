#include<iostream>

using namespace std;
void find_swaps(int arr[],int n,int k){
    int swaps = 0;
    for(int i=0;i<n;++i){
        if(arr[i]>k){
            for(int j=i+1;j<n;++j){
                if(arr[j]<=k){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    swaps++;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    cout<<"Swaps are:"<<swaps<<endl;
}
int main(){

    int arr[] = {2,1,5,6,3,4,1,2,5};
    int n = sizeof(arr)/sizeof(arr[1]);
    int k = 3;
    find_swaps(arr,n,k);
    return 0;
}