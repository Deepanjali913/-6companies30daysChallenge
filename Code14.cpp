#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
    int count = 1;
    string ans = "";
    for (int i = 1; i < src.length(); i++)
    {

        if (src[i] == src[i - 1])
        {
            count++;
        }
        else
        {
            ans.push_back(src[i - 1]);
            ans.push_back(count + '0');
            count = 1;
        }
    }
    ans.push_back(src[src.length() - 1]);
    ans.push_back(count + '0');
    return ans;
}
int main(){
    string s = "aaaabbbccc";
  
    string ans = encode(s);

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }

}
