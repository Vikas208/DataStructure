#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int a[][4] = {  {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      };
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(a[0])/n;

    //spiral order print

    int row_start = 0,row_end = n-1,column_start = 0,column_end = m-1;
    while(row_start<=row_end&&column_start<=column_end){

        //for row_start

        for(int col = column_start;col<=column_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        
        row_start++;

        for(int row = row_start;row<=row_end;++row){
            cout<<a[row][column_end]<<" ";
        }
        

        column_end--;

        for(int col = column_end;col>=column_start;col--){
            cout<<a[row_end][col]<<" ";
        }

        row_end--;

        for(int row = row_end;row>=row_start;row--){
            cout<<a[row][column_start]<<" ";
        }
        
        column_start++;

    }

    return 0;
}
