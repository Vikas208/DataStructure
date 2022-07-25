#include<iostream>

using namespace std;
int kadane_algo(int array[],int n){
    int maximum = INT16_MIN;
    int minimum=0; 
    for(int i=0;i<n;++i){
            minimum = minimum+array[i];
            if(maximum<minimum){
                maximum = minimum;
            }
            if(minimum<0){
                minimum = 0;
            }
    }
    return maximum;
}
int main(){

    int array[]={-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"Maximum contigous array is: "<<kadane_algo(array,n)<<endl;
    return 0;
}