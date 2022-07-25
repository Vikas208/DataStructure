#include<iostream>

using namespace std;

void partitioning(int arr[],int n,int lowval,int highval){
    int left=0,middle=0,right=0;
    for(int i=0;i<n;++i){
        if(arr[i]<lowval){
            left++;
        }
        else if(arr[i]>=lowval&&arr[i]<=highval){
            middle++;
        }
        else{
            right++;
        }
        
    }
    middle = middle+left;
    right +=middle;
    int l = left;
    left=0;
    int m  = middle;
    middle =l;
    int r = right;
    right = m;
    int array[n];
    for(int i=0;i<n;++i){
        if(left<l){
            if(arr[i]<lowval){
                array[left-1]=arr[i];
                left++;
            }
        }
        if(middle<m){
            if(arr[i]>=lowval&&arr[i]<=highval){
                array[middle-1] = arr[i];
                middle++;
            }
        }
        if(right<r){
            if(arr[i]>highval){
                array[right-1] = arr[i];
                right++;
            }
        }
        
    }
    
    for(int i=0;i<n;++i){
        cout<<array[i]<<", ";
    }
}
int main(){

    int arr[] = {1,14,5,20,4,2,54,20,87,98,3,1,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lowval = 10;
    int highval = 20;
    partitioning(arr,n,lowval,highval);
    return 0;
}