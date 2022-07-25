#include<bits-stdc++.h>
using namespace std;

int main(){

	int array[] = {1,4,-1,3,6,2};
	int k = 2;
	int n = sizeof(array)/sizeof(array[0]);
	deque<int> q,nums;
	vector<int> ans;
	for(auto i : array){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=0;i<k;++i){
		while(!q.empty() && array[q.back()]<array[i]){
			q.pop_back();
		}
		q.push_back(i);
	}
	ans.push_back(array[q.front()]);
	for(int i=k;i<n;++i){
		if(q.front()==i-k){
			q.pop_front();
		}
		while(!q.empty() && array[q.back()]<array[i]){
			q.pop_back();
		}
		q.push_back(i);
		ans.push_back(array[q.front()]);
	}
	for(auto i : ans){
		cout<<i<<" ";
	}
	return 0;
}