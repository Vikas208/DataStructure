#include<iostream>
using namespace std;
float max(float array[],int n){
    float max=INT16_MIN;
    for(int i=0;i<n;++i){
        if(max<array[i]){
            max = array[i];
        }
    }
    return max;
}
float min(float array[],int n){
    float min=INT16_MAX;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(min>array[i]){
                min = array[i];
            }
        }
    }
    return min;
}
int main(){

    float array[] = {32.32,44,12,50,21};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"Maximum: "<<max(array,n)<<endl;
    cout<<"Minimum: "<<min(array,n)<<endl;
    return 0;
}