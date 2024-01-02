//Query Kth smallest trimmed number 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = nums[0].size();
        vector<int> res;

       for(auto query : queries){
           int k = query[0];
           int x = query[1];
           priority_queue<pair<string , int>> pq;
           for(int i=0 ; i<n ; i++){
               string str = nums[i].substr(m-x);
               pq.push({str,i});
               if(pq.size()>k){
                   pq.pop();
               }


           }
           res.push_back(pq.top().second);
       }
        return res;
    
    }
};

int main(){
    Solution sol;
    vector<string> nums = {"102","473","251","814"};
    vector<vector<int>> queries = {{1,1},{2,3},{4,2},{1,2}};
    vector<int> ans = sol.smallestTrimmedNumbers(nums , queries);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}