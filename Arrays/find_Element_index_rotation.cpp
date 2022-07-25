#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

void findElement(int arr[],int n,int rotation,int rotate[][2],int index){
    
    for(int i = rotation-1;i>=0;--i){
        int left = rotate[i][0];
        int right = rotate[i][1];

        if(left<=index&&right>=index){
            if(left==index){
                index=right;
            }
            else{
                index--;
            }
        }
    }
    cout<<arr[index]<<endl;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int rotation = 2;
    int rotate[][2] = {{0,2},{0,3}};
    int index=1;

    findElement(arr,n,rotation,rotate,index);
    return 0;
}