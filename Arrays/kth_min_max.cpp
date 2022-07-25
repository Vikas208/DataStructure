#include<iostream>

using namespace std;
void sortarray(float *array,int n){
    float temp;
    int max;
    for(int i=0;i<n-1;++i){
    
        for(int j=0;j<n-1;++j){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                
            }
        }
    }
}
void findkMax(float array[],int n,int k){
    int count=1;
    for(int i=n-1;i>=0;--i){
        if(count==k){
            cout<<"Maximum kth Value is: "<<array[i]<<endl;
            break;        
        }
        count++;
    }
}
void findkMin(float array[],int n,int k){
    int count=1;
    for(int i=0;i<n;++i){
        if(count==k){
            cout<<"Minimum kth Value is: "<<array[i]<<endl;
            break;        
        }
        count++;
    }
}
int main(){

    float array[] = {43,2,12,45,40.3,50,1,10.32};
    int n = sizeof(array)/sizeof(array[0]);
    sortarray(array,n);
    for(int i=0;i<n;++i){
        cout<<array[i]<<endl;
    }
    int k;
    cout<<"Enter the K value :";
    cin>>k;
    findkMax(array,n,k);
    findkMin(array,n,k);
    return 0;
}