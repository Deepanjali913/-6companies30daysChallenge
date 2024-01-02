//Combination Sum 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 vector<vector<int>> result;
    void try_combination(vector<int>& combination, int k, int n, int start){
        if(k == combination.size()){
            if(n == 0) result.push_back(combination);
            return;
        }
        for(int i = start; i <= 9; ++i){
            combination.push_back(i);
            try_combination(combination, k, n-i, i+1);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
     vector<int> combination;
        try_combination(combination, k, n, 1);
        return result;
    }
};
int main(){
    Solution sol ;
    vector<vector<int>> ans = sol.combinationSum3(3 , 9);
    for(int i=0 ; i< ans.size() ; i++){
        for(int j=0 ; j<ans[0].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}