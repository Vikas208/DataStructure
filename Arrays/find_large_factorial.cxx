#include<iostream>
#define MAX 500
using namespace std;
int multiply(int x ,int res[],int res_size){
    int carry=0;
    int prod;
    for(int i=0;i<res_size;++i){
        prod = res[i]*x+carry;
        res[i] = prod%10;
        carry = prod/10; 
    }
    while(carry){
        res[res_size]=carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void find_fact(int fact){
    int res[MAX];
    res[0] = 1;
    int res_size=1;
    for(int i=2;i<=fact;++i){
        res_size = multiply(i,res,res_size);
    }
    for(int i=res_size-1;i>=0;--i){
        cout<<res[i];
    }
}

int main(){

    int fact = 120;
    find_fact(fact);
    return 0;
}