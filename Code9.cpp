#include <bits/stdc++.h>
using namespace std;

string printMinNumberForPattern(string S)
{
    int n = S.length();
    int current = 1;
    string ans = "1";
    int i = 0;
    while (i < n)
    {
        if (S[i] == 'D')
        {
            int j = i;
            while (j < n && S[j] == 'D')
            {
                j++;
            }
            int no_of_D = j - i;
            current += no_of_D;
            ans[i] = (current + '0');
            int count = current;
            while (i != j)
            {
                count--;
                ans.push_back(count + '0');
                i++;
            }
        }
        else
        {
            current++;
            ans.push_back(current + '0');
            i++;
        }
    }
    return ans;
}
int main()
{
    string ans = printMinNumberForPattern("IIDDD");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}