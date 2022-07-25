#include<bits-stdc++.h>
using namespace std;
bool findValid(string first,string last,string result){
	if(first.size()+last.size()!=result.size()){
		return false;
	}
	int i=0,j=0,k=0;
	while(k!=result.size()){
		if(i<first.size()  && first[i] == result[k]){
			i++;
		}
		else if(j<last.size() && last[j] == result[k]){
			j++;
		}
		else{
			return false;
		}
		k++;
	}
	return true;
}
int main(){
	string first = "XY";
	string last =  "12";
	string result[] = {"1XY2","Y12X"};
	for(auto r : result){
		cout<<findValid(first,last,r)<<endl;
	}
	return 0;
}