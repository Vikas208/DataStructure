#include<iostream>

using namespace std;
void findCommonElement(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    
    for(int i=0;i<n1;++i){
        for(int j=0;j<n2;++j){
            if(arr1[i]==arr2[j]){
                for(int k=0;k<n3;++k){
                    if(arr2[j]==arr3[k]){
                        cout<<arr3[k]<<endl;
                    }
                }
            }
        }
    }
}
int main(){

    int arr1[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {4,5,6,7,8,9,10,11};
    int arr3[] = {5,6,7,8,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    findCommonElement(arr1,arr2,arr3,n1,n2,n3);
    return 0;
}