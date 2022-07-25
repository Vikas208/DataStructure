#include<bits-stdc++.h>
using namespace std;

#define N 5
int findMaxValue(int Mat[][N]){

    int max = INT16_MIN;
    for(int a = 0;a<N-1;++a){
        for(int b = 0;b<N-1;++b){
            for(int d = a+1;d<N;++d){
                for(int e = b+1;e<N;++e){
                    if(max<(Mat[d][e]-Mat[a][b])){
                        max = Mat[d][e]-Mat[a][b];
                    }
                }
            }
        }
    }
    return max;
}
int main()
{
int mat[N][N] = {
                { 1, 2, -1, -4, -20 },
                { -8, -3, 4, 2, 1 },
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 10, -5, 1 }
            };
    cout << "Maximum Value is "
        << findMaxValue(mat);
 
    return 0;
}