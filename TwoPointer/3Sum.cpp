#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
int main(){

    int array[] = {20,2,4,2,5,6};
    int n = sizeof(array)/sizeof(array[0]);
    int target = 24;

    sort(array,array+n); 
    
    for(int i=0;i<n;++i){
        int lo = i+1 ,hi = n-1;
        while(lo<hi){
            int current = array[i]+array[lo]+array[hi];
            if(current==target){
                cout<<i<<" "<<lo<<" "<<hi<<endl;
                cout<<"True";
                return 0;
            }
            if(current<target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    cout<<"False";
    return 0;
}
