#include<iostream>

using namespace std;
void find_row(int arr[][4],int row,int column){
    int counter=0,index;
    int Max = INT16_MIN;
    for(int i=0;i<row;++i){
        for(int j=0;j<column-1;++j){
            if(arr[i][j] == 1){
                counter++;
            }
        }
        if(Max<counter){
            Max = counter;
            index=i;
        }
        counter=0;
    }
    cout<<index<<endl;
}
int main(){

    int arr[][4] = {{0,0,1,1},{0,1,1,1},{1,1,1,1}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int column = sizeof(arr[0])/row;
    find_row(arr,row,column);
    return 0;
}