// Employ priority systems
/* Approach : Unordered Map and Sorting
1. Use unordered map to store each employee access times
2. Sort access times for each employee
3. Scan sorted access times to check if accessed >=3 times in one hour
Time : O(n log n)
Space : O(n)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findHighAccessEmployees(vector<vector<string>> &access_times)
    {
        // name -> access times
        unordered_map<string, vector<int>> mp;
        for (auto &it : access_times)
        {
            int time = stoi(it[1]);    // convert to int
            mp[it[0]].push_back(time); // store in map
        }

        // sort each employee access times
        for (auto &it : mp)
            sort(it.second.begin(), it.second.end());

        // Scan sorted access times to check if accessed >=3 times
        vector<string> ans; // to store required employees
        for (auto &it : mp)
        {
            vector<int> &time = it.second;
            for (int i = 2; i < time.size(); i++)
            {
                if (time[i] - time[i - 2] < 100)
                {
                    // store employee in ans and move to another employee
                    ans.push_back(it.first);
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<vector<string>> access_time = {{"a", "0549"}, {"b", "0457"}, {"a", "0532"}, {"a", "0621"}, {"b", "0540"}};
    vector<string> ans = sol.findHighAccessEmployees(access_time);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}
