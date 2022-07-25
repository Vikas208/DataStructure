#include<bits-stdc++.h>
using namespace std;
void findDup(string s){
	map<char,int> m;
	for(int i=0;i<s.size();++i){
		if(s[i]!=' ')
			m[s[i]]++;
	}
	for(auto it:m){
		if(it.second>1){
			cout<<it.first<<": "<<it.second<<endl;
		}
	} 
}
int main(){
	string s = "Geeks for Geek";
	findDup(s);
	return 0;
}