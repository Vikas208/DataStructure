#include<bits-stdc++.h>
using namespace std;

bool isRotation(string s1,string s2){

    if(s1.length()!=s2.length()){
        return false;
    }
    string temp = s1+s1;
    
    int length = 0;
    int j=0;
    for(int i=0;i<temp.length()&&j<s2.size();++i){
        if(temp[i]==s2[j]){
            length++;
            j++;
        }
        else{
            length=0;
            j=0;
        }
    }
    if(length==s2.length()){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){

    string s1 = "ABCD";
    string s2 = "ACBD";
    cout<<isRotation(s1,s2);
    return 0;
}
