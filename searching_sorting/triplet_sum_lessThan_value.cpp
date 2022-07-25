#include<iostream>
#include<vector>
using namespace std;

void findTriplet(vector<int> v,int target){

	for(int i=0;i<v.size()-2;++i){
		for(int j=i+1;j<v.size()-1;++j){
			for(int k=j+1;k<v.size();++k){
				if(v[i]+v[k]+v[j]==target){
					cout<<v[i]<<"+"<<v[j]<<"+"<<v[k]<<"="<<target<<endl;
				}
			}
		}
	}
}
int main(){
	vector<int> v = {1,2,3,4,5,6,7};
	int target = 7;
	findTriplet(v,target);
}