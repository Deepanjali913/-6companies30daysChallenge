//Verify Preorder Serialization of a Binary Tree
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream ss(preorder);
        int nodes =1;
        string curr ;
        while(getline(ss,curr , ',')){
            nodes--;
            if(nodes<0) return 0 ;
            if(curr!="#") nodes+=2;

        }
        return nodes==0 ;
    }
};