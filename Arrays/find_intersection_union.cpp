#include<iostream>

using namespace std;
void arr_union(int arr1[],int arr2[],int n1,int n2) {
    int n = n1+n2;
    int *union_arr=new int[n];
    for(int i=0;i<n1;i++){
        union_arr[i]=arr1[i];
        
    }
    int index = n1;
    for(int i=0;i<n2;++i){
        union_arr[index]=arr2[i];
        index++;
    }
    for(int i=0;i<n;++i){
        
        for(int j=0;j<n;++j){
            if(i!=j){
            if(union_arr[i]==union_arr[j]){
                for(int k=i;k<=n;++k){
                    union_arr[k]=union_arr[k+1];
                }
                n=n-1;
            }
            }
        }
    }
    cout<<"Union is:\n";
    for(int i=0;i<n;++i){
        cout<<union_arr[i]<<endl;
    }
}

void intersection_union(int arr1[],int arr2[],int n1,int n2){
    int intersection[100];
    int n=0;
    for(int i=0;i<n1;++i){
        for(int j=0;j<n2;++j){
            if(arr1[i]==arr2[j]){
                intersection[n] = arr1[i];
                n++;
            }
        }
    }
    cout<<"Intersection is:\n";
    for(int i=0;i<n;++i){
        cout<<intersection[i]<<endl;
    }
}
int main(){

    int arr1[] = {10,20,32,45,51,65};
    int arr2[] = {32,40,45,54,55};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    arr_union(arr1,arr2,n1,n2);
    intersection_union(arr1,arr2,n1,n2);
    return 0;
}