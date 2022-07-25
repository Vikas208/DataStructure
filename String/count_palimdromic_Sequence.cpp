// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
        string s;
        long long int c=0;
       for(int i=0;i<str.length();++i){
           for(int j=i;j<str.length();++j){
               for(int k=i;k<=j;++k){
                 s += str[k];  
                 cout<<s<<endl;
               }
               
               string copy = s;
               reverse(s.begin(), s.end());
               if(s.compare(copy)==0){
                  c++; 
               }
               s=""; 
           }
       }
       return c;
    }
     
};

// { Driver Code Starts.
// Driver program
int main()
{
        string str="aaaaaaaaaaaaaaaaaaaaaaaaaaa";
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
}  // } Driver Code Ends