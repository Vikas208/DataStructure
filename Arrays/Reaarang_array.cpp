#include <bits-stdc++.h>

using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<"\t";
    }   
    cout<<endl;
}
void rearrange(int arr[], int n)
{
    int pos=0;
    sort(arr,arr+n);
    print(arr,n);
    for(int i=0;i<n;++i){
        if(arr[i]>=0){
            pos = i;
            break;
        }
    }
    int a[10000];
    int index=0;
    int i=0,j=pos;
    while(i<pos&&j<n){
        a[index] = arr[i];
        index++;
        a[index] = arr[j];
        index++;
        i++;
        j++; 
    }
    while(i<pos){
        a[index]= arr[i];
        index++;i++;
    }
    while(j<n){
        a[index] = arr[j];
        j++;index++;
    }
    
    print(a,n);
}
int main()
{

    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    return 0;
}