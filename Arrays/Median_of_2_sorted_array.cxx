#include<iostream>

using namespace std;
void MergeArray(int *arr1,int *arr2,int n1,int n2){
    int n=n1+n2;
    int arr3[n];
    int i=0,j=0,k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr3[k]= arr1[i];
        k++;
        i++;
    }
    int middlearr1=(n/2)-1;
    while(j<n2){
        arr3[k]=arr2[j];
        j++;k++;
    }
    int middlearr2=(n/2);
    for(i=0;i<n;++i){
        cout<<arr3[i]<<",";
    }
    cout<<endl;
    cout<<middlearr1<<middlearr2<<endl;
    if(n%2==0){
        double median = (arr3[middlearr1]+arr3[middlearr2]);
        cout<<"Median is:"<<(median/2)<<endl;}
    else{
        cout<<"Median is: "<<arr3[middlearr2]<<endl;
    }
}
int main(){

    int arr1[]={1,2};
    int arr2[]={3,4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    // if(n1!=n2){
    //     cout<<"Array size are not Equal"<<endl;
    // }
    // else
        MergeArray(arr1,arr2,n1,n2);
    
    return 0;
}