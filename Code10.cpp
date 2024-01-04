#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDistinct(vector<int> &nums, int k, int p)
    {
        set<string> s;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            string str = "";
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j] % p == 0)
                {
                    count++;
                }
                if (count > k)
                    break;
                str.push_back(nums[j]);
                s.insert(str);
            }
        }
        return s.size();
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {2, 3, 3, 2, 2};
    int k = 2;
    int p = 2;
    int ans = sol.countDistinct(nums, k, p);
    cout << ans;
}