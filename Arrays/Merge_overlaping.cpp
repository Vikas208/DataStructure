#include<iostream>

using namespace std;
struct Pair{
    int n;
    int m;
};  
void sort(Pair *arr,int n){
    Pair temp;
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(arr[j].n>arr[j+1].n){
                temp.n = arr[j].n;
                temp.m = arr[j].m;
                arr[j].n = arr[j+1].n;
                arr[j].m = arr[j+1].m;
                arr[j+1].n = temp.n;
                arr[j+1].m = temp.m;
            }
        }
    }
}
void Merge(Pair arr[],int n){
    Pair MergeArr[n];
    int index=0;
    for(int i=1;i<n;++i){
        if(arr[index].m>=arr[i].n){
            MergeArr[index].n=min(arr[i].n,arr[index].n);
            MergeArr[index].m = max(arr[i].m,arr[index].m);
        }
        else{
            index++;
            arr[index] = arr[i];
        }
    }
    for(int i=0;i<=index;++i){
        cout<<"{"<<MergeArr[i].n<<","<<MergeArr[i].m<<"}"<<endl;
    }
}
int main(){

    Pair arr[] = {{1,3},{2,-1},{8,10},{15,18}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;++i){
        cout<<"{"<<arr[i].n<<","<<arr[i].m<<"}"<<endl;
    }
    cout<<"Merge"<<endl;
    Merge(arr,n);
    
    
    return 0;
}