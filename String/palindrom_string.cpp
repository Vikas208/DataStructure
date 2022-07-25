#include<iostream>
#include<string.h>
using namespace std;
bool ispalindrom(char *str){
    char copy[strlen(str)];
    int start=0,end=strlen(str)-1;
    strcpy(copy,str);
    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    if(strcmp(copy,str)==0){
        return true;
    }
    else
        return false;
}
int main(){

    char str[100];
    cin>>str;
    cout<<ispalindrom(str);
    return 0;
}