// Sort Characters by Frequency
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> mpp;
        string ans;
        vector<pair<char, int>> temp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        for (auto it : mpp)
        {
            temp.push_back({it.first, it.second});
        }
        sort(temp.begin(), temp.end(), [&](auto a, auto b)
             { return a.second > b.second; });
        for (auto it : temp)
        {
            while (it.second != 0)
            {
                ans.push_back(it.first);
                it.second--;
            }
        }
        return ans;
    }
};