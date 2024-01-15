// K-diff pairs in an array
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPairs(vector<int> &arr, int k)
    {

        unordered_map<int, int> m;

        for (auto &x : arr)
        {
            m[x]++;
        }

        int ans = 0;

        for (auto x : m)
        {
            int ele = x.first, freq = x.second;
            if (m.find(ele + k) != m.end())
            {
                if (ele != (ele + k))
                {
                    ans++;
                }
                else if (m[ele] > 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
