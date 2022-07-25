#include<bits-stdc++.h>
using namespace std;

void merge(int arr[],int arr2[],int n,int m){
    int i = 0,j = 0;

    int newarr[n+m];
    int index=0;
    while(i<n&&j<m){
        if(arr[i]<arr2[j]){
            newarr[index] = arr[i];
            index++;
            i++;

        }
        else{
            newarr[index] =  arr2[j];
            j++;
            index++;
        }
        
    } 
    while(i<n){
        newarr[index] = arr[i];
        index++;
        i++;
    }
    while(j<m){
        newarr[index] = arr2[j];
        index++;
        j++;
    }

    cout<<"[";
    for(i=0;i<sizeof(newarr)/sizeof(newarr[0]);++i){
        cout<<newarr[i]<<"\t";
    }
    cout<<"]";
}
int main(){

    int array[] = {10,40,50,70};
    int array2[] = {10,20,30,40};
    int n = sizeof(array)/sizeof(array[0]);
    int m = sizeof(array2)/sizeof(array2[0]);
    merge(array,array2,n,m);
    return 0;
}