#include<iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int>&nums,int target,int low,int high){

	if(high>low){
		while(low<high){
			int mid = low+(high-low)/2;

			if(nums[mid]==target){
				return mid;
			}
			else if(nums[mid]>target){
				BinarySearch(nums,target,low,mid-1);
			}
			else{
				BinarySearch(nums,target,mid+1,high);
			}
		}
	}
	else
		return -1;
	
}
int main(){
	vector<int> arr = {-1,0,3,5,9,12};
	int result = BinarySearch(arr,3,0,arr.size());
	cout<<result;
	return 0;
}