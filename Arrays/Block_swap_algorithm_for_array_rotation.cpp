#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
void rotation(int *arr,int n ,int size){

	int counter=0;
	int val;
	int j;
	for(int i=0;i<size;++i){
		val = arr[i];
		cout<<i<<endl;
		for(j=i;j<size;++j){
			arr[j] = arr[j+1];
		}
		arr[j-1] = val;
		counter++;
		if(counter==n){
			break;
		}
	}
}

int main(){

	int arr[] = {1,2,3,4,5,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n = 2;
	rotation(arr,n,size);
	print(arr,size);
	return 0;
}