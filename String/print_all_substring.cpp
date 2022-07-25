#include <bits-stdc++.h>
using namespace std;
void findSubstring(string s)
{

	vector<string> v;
	string c;
	for (int i = 0; i < s.size(); ++i)
	{
		for (int j = i; j < s.size(); ++j)
		{

			for (int k = i; k <= j; ++k)
			{
				c += s[k];
			}
			v.push_back(c);
			c = "";
		}
	}
	// sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << "\t";
	}
}
int main()
{

	string s = "aa";
	findSubstring(s);
	return 0;
}