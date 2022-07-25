#include<bits-stdc++.h>
using namespace std;

void Merge(int *arr,int n,int *arr2,int m){

	int i=0,j=0,temp;
	while(i<n&&j<m){
		if(arr[i]>arr2[j]){
			temp = arr[i];
			arr[i] = arr2[j];
			arr2[j] = temp;
			i++;
		}
		
	}
}
int main(){

	int arr[] = {1,2,4,5,7};
	int arr2[] = {0,2,5,6};

	int n = sizeof(arr)/sizeof(arr[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);

	Merge(arr,n,arr2,m);
	return 0;
}