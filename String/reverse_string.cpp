#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char str[100];
    cin>>str;
    int start=0;
    int end = strlen(str)-1;
    while(start<end){
        char temp = str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    cout<<str<<endl;
    return 0;
}