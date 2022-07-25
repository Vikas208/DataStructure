// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        
        int maximum = 0,i,j,k,count=0;
        string res;
        string result="";
        result+=S[0];
        string copy;
        for(i=0;i<S.size();++i){
            for(j=i;j<S.size();++j){
                for(k=i;k<=j;++k){
                    res += S[k];
                    count++;
                }
                cout<<res<<endl;
                copy = res;
                reverse(copy.begin(),copy.end());
                if(copy==res){
                    if(maximum<count){
                        result = res;
                        maximum = k;
                    }
                }
                count=0;
                res="";
            }
            
        }
        return result;
            
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S = "mixrpifeffeclhbvfukbyeqfqo";
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends