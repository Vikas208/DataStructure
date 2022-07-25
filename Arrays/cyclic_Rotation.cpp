#include<iostream>

using namespace std;
void cyclic_array(int array[],int n){
    int last = array[n-1];
    for(int i=n-2;i>=0;--i){
        array[i+1] = array[i];
    }
    array[0] = last;
    cout<<"Cyclic Array"<<endl;
    cout<<"[";
    for(int i=0;i<n;++i){
        cout<<array[i]<<", ";
    }
    cout<<"]";
}
int main(){

    int array[]={1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    cyclic_array(array,n);
    return 0;
}