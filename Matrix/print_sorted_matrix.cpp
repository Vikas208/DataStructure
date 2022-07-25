#include<iostream>

using namespace std;
void sortMatrix(int array[][3],int n,int m){
    
}
int main(){

    int matrix[][3] = {{1,5,7},{2,6,8},{4,7,9}};
    int n = sizeof(matrix)/sizeof(matrix[0]);
    int m  =sizeof(matrix[0])/n;
    sortMatrix(matrix,n,m-1);
    return 0;
}