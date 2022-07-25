#include<bits-stdc++.h>
using namespace std;
void sortArray(int *arr,int n){
	
	int temp;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i]= arr[j];
				arr[j]= temp;
			}
		}
	}

}
int main(){
	
	int arr[]={10,5,30,2,50,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortArray(arr,n);
	for(int i=0;i<n;++i){
		cout<<arr[i]<<endl;
	}
	cout<<"First Position Is:"<<arr[0]<<endl;
	cout<<"Last Position Is:"<<arr[n-1]<<endl;
	return 0;
}
