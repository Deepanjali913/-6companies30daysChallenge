// Count number of nice subarrays
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        int n = s.size();
        map<string, int> mpp;
        vector<string> ans;
        for (int i = 0; i < n - 10 + 1; i++)
        {
            string substr = s.substr(i, 10);
            if (mpp[substr] == 1)
            {
                ans.push_back(substr);
                mpp[substr]++;
            }
            else
            {
                mpp[substr]++;
            }
        }
        return ans;
    }
};