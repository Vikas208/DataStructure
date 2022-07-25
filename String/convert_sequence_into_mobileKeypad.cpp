#include<iostream>
#include<string>
using namespace std;
const string keypad[] ={
				  "2","22","222",
				  "3","33","333",
				  "4","44","444",
				  "5","55","555",
				  "6","66","666",
				  "7","77","777","7777",
				  "8","88","888"
				  "9","99","999","9999"};

void convertSequence(string s){
	string res="";
	for(int i=0;i<s.length();++i){
		if(s[i]==' ')
			res+="0";
		else{
			int pos = s[i]-'A';
			res+=keypad[pos];
		
	}
	
	}
	cout<<res<<endl;
}
int main()
{
	string s="GEEKS FOR GEEK";
	convertSequence(s);
	return 0;
}
