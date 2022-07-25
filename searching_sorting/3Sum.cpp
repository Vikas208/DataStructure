#include <bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int lo = i + 1;
        int hi = nums.size() - 1;

        while (lo < hi)
        {

            int sum = nums[i] + nums[lo] + nums[hi];
            if (sum == 0)
            {
                vector<int> v = {nums[i], nums[lo], nums[hi]};
                res.push_back(v);
                lo++;
                hi--;
            }
            else if (sum < 0)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }
    return res;
}
int main()
{

    vector<int> v = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res;

    res = threeSum(v);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}