// Find Subsequence of Length K With the Largest Sum
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        vector<pair<int, int>> result;
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push({nums[i], i});
        }
        for (int i = 0; i < k; i++)
        {
            result.push_back(pq.top());
            pq.pop();
        }
        sort(result.begin(), result.end(), [&](auto a, auto b)
             { return a.second < b.second; });
        for (auto ele : result)
        {
            ans.push_back(ele.first);
        }
        return ans;
    }
};
