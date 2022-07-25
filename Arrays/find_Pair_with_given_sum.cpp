#include<iostream>
using namespace std;

void findPair(int arr[],int n,int sum){
	
	int i;
	for(i=0;i<n-1;++i){
		if(arr[i]>arr[i+1])
			break;
	}
	int smallElement = (i+1)%n;
	int largeElement = i;

	while(smallElement!=largeElement){
		if(arr[smallElement]+arr[largeElement]==sum){
			cout<<"["<<arr[smallElement]<<","<<arr[largeElement]<<"]";
			smallElement = -1;
			break;
		}
		else if(arr[smallElement]+arr[largeElement]<sum){
			smallElement = (smallElement+1)%n;
		}
		else{
			largeElement = (largeElement+n-1)%n;
		}
	}
	if(smallElement!=-1){
		cout<<"[]";
	}
}
int main(){
	
	int arr[] = {11, 15, 26, 38, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	findPair(arr,n,42);
	return 0;
}

/*
	Algorithm

step 1:  

*/