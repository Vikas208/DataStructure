#include<iostream>
#include<stdlib.h>
using namespace std;
void sort(int array[],int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;++i){
        if(array[i]==0){
            zero++;
        }
        else if(array[i]==1){
            one++;
        }
        else if(array[i]==2){
            two++;
        }
    }
    cout<<"[";
    while(zero--){
        cout<<"0,";
    }
    while(one--){
        cout<<"1,";
    }
    while(two--){
        cout<<"2,";
    }
    cout<<"]";
}
int main(){

    int array[] = {2,0,1,0,1,2};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;++i){
        cout<<array[i]<<endl;
    }
    sort(array,n);
    return 0;
}