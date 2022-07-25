#include<iostream>

using namespace std;
void sort(int *array,int n){
    int temp;
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(array[j]>array[j+1]){
                temp =array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int findminimize(int array[],int n,int k){
    
    if(n==1){
        return array[0];
    }
    int min=array[0]+k;
    int max=array[n-1]+k;
    if(min>max){
        int temp = min;
        min = max;
        max= min;
    }
    int subtract,add;
    for(int i=1;i<n;++i){
        subtract = array[i]-k;
        add = array[i]+k;

        if(subtract>=min&&add<=max){
            continue;
        }
        if(max-subtract<=add-min){
            min = subtract;
        }
        else{
            max = add;
        }
    }
    return max-min;
}
void print(int array[],int n){
    for(int i=0;i<n;++i){
        cout<<array[i]<<endl;
    }
}
int main(){

    int array[] = {1,5,8,10}; 
    int n = sizeof(array)/sizeof(array[0]);
    int k=2;
    sort(array,n);
    cout<<findminimize(array,n,k);
    // print(array,n);
    return 0;
}