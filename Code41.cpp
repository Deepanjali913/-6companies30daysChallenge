// Top K frequent words
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        map<string, int> mp;
        vector<pair<string, int>> temp;
        vector<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            mp[words[i]]++;
        }
        for (auto it : mp)
        {
            temp.push_back({it.first, it.second});
        }
        sort(temp.begin(), temp.end(), [&](auto a, auto b)
             {
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second; });
        for (int i = 0; i < k; i++)
        {
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
