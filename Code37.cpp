// Get Equal Substrings Within Budget
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int ans_len = 0;
        int cost = 0;
        int start = 0;
        int end = 0;
        while (end < (s.length()))
        {
            int diff = abs(t[end] - s[end]);

            while ((start <= end) and (cost + diff) > maxCost)
            {
                cost = cost - abs(t[start] - s[start]);
                start++;
            }

            cost = cost + diff;
            ans_len = max(ans_len, (end - start + 1));
            end++;
        }
        return ans_len;
    }
};