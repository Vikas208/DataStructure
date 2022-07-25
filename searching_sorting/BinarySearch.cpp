#include <iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>&nums,int target){
	int start = 0;
	int end = nums.size()-1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(nums[mid]==target){
			return mid;
		}
		else if(nums[mid]>target){
			end = mid-1;
		}
		else{
			start= mid+1;
		}
	}
	return -1;
}
int main(){
	
	vector<int> nums = {10,20,40,4,20,30};
	cout<<BinarySearch(nums,4);
	return 0;
}