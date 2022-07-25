#include<iostream>

using namespace std;
void find_maximum_product(int arr[],int n){
    int maximum = INT16_MIN;
    int product=1;
    for(int i=0;i<n;++i){
        product = product*arr[i];
        if(maximum<product){
            maximum = product;
        }
    }
    cout<<maximum<<endl;
}
int main(){

    int arr[] = {-2,-40,0,-2,-3};
    int n =sizeof(arr)/sizeof(arr[0]);
    find_maximum_product(arr,n);
    return 0;
}