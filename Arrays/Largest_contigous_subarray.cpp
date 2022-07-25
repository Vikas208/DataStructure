#include<iostream>
using namespace std;
void findLargest_subarray(int array[],int n){
    int subarray[n];
    int index=0;
    int sum=0,maximum=0,start,end;
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            subarray[index] = array[j];
            index++;
            for(int k=0;k<index;++k){
                sum = sum+subarray[k];
                 
            }
            if(sum>maximum){
                start=i;
                end=j;
                maximum = sum;
            }
            sum=0;
        }
        index=0;
    }
    cout<<"From Stating index: "<<start<<" To ending index:"<<end<<endl;
    cout<<"Largest Contigous Subarray is: "<<maximum<<endl;
}
int main(){

    int array[] = {-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(array)/sizeof(array[0]);
    findLargest_subarray(array,n);
    return 0;
}