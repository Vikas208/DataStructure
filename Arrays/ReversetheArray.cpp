#include<iostream>

using namespace std;
void reverse(int array[],int n){
    int start =0;
    int end = n-1;
    while(start<end){
        int temp = array[start];
        array[start]=array[end];
        array[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;++i){
        cout<<array[i]<<" ";
    }
}
int main(){

    int array[] = {10,20,30,40,50};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"*Array in Reverse Order*"<<endl;
    reverse(array,n);
    return 0;
}