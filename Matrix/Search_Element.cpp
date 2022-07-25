#include<iostream>

using namespace std;
void find(int arr[][3],int n,int m,int key){
    bool flag=false;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(arr[i][j]==key){
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"Element is found in Matrix"<<endl;
            break;
        }
    }
    if(flag==false){
        cout<<"Element is not in matrix"<<endl;
    }

}
int main(){

    int arr[][3]={{1,2,4},{53,1,54},{76,43,75}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0])/n;
    int key = 75;
    find(arr,n,m,key);
    return 0;
}