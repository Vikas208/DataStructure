#include<iostream>
#include<string.h>
using namespace std;
void findDuplicate(string s){
  int flag;
  string s1="";
  for(int i=0;i<s.length();++i){
    flag=0;
    for(int j=i+1;j<s.length();++j){
        if(s[i]==s[j]){
          flag=1;
        }
    }
    if(flag==1){
      int flag1=0;
      for(int k=0;k<s1.length();++k){
          if(s1[k]==s[i]){
              flag1=1;
          }
      }
      if(flag1!=1)
        s1 = s1+s[i];
    }
  }
  cout<<s1;
}
int main(){

  string s = "MY name is vikas";
  findDuplicate(s);
  return 0;
}