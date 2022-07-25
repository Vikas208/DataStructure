#include<iostream>
using namespace std;

void Solve(int arr[],int n){

	int arrsum=0;
	int curval=0;
	for(int i=0;i<n;++i){
		arrsum+=arr[i];
		curval = curval+(i*arr[i]);
	}
	int maxval = curval;
	for(int j=1;j<n;++j){
		curval = curval+arrsum-n*arr[n-j];
		if(curval>maxval){
			maxval = curval;
		}
	}
	cout<<maxval;
}
int main(){

	int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	Solve(arr,n);
	return 0;
}