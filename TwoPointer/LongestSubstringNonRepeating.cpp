#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
int main(){

    string s = "bbbbb";
    vector<int> dict(256,0);
    int maxLen = 0 ,start = 0;
    for(int i=0;i<s.size();++i){
        
        if(dict[s[i]]>start){
            start = dict[s[i]];
        }
        dict[s[i]]=i;
        maxLen = max(maxLen,i-start);
    }
    cout<<maxLen<<endl;
    return 0;
}