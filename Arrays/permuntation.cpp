#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

vector<vector<char>> ans;
void permute(vector<char> &a,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    else{
        for(int i=idx;i<a.size();++i){
            swap(a[i],a[idx]);
            permute(a,idx+1);
            swap(a[i],a[idx]);
        }
        return;
    }
}
int main(){

    vector<char> a;
    a.push_back('R');
    a.push_back('E');
    a.push_back('D');

    permute(a,0);

    for (auto i :ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}