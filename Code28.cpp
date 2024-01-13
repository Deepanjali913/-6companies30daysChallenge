// Wiggle sort
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int arr[n];

        int i = 1;
        int j = n - 1;

        while (i < n)
        {
            arr[i] = nums[j];
            i = i + 2;
            j--;
        }

        i = 0;
        while (i < n)
        {
            arr[i] = nums[j];
            i = i + 2;
            j--;
        }

        for (int i = 0; i < n; i++)
        {
            nums[i] = arr[i];
        }
    }
};