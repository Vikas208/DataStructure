#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

int Multiply(int num,int *res,int res_size){
    int carry = 0;
    for(int i=0;i<res_size;++i){
        int prod = res[i]*num+carry;
        res[i] =  prod%10;
        carry = prod/10;
    }

    while(carry){
        res[res_size] = carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;
}
void findfactorial(int num){
    
    int res[1000];
    int res_size = 1;
    res[0] = 1;
    for(int i=2;i<=num;++i){
        res_size = Multiply(i,res,res_size);
    }
    for(int i = res_size-1;i>=0;--i){
        cout<<res[i];
    }
      
}
int main(){

    int number = 200;
    findfactorial(number);
    return 0;
}