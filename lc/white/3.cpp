#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        set<char> q;
        int n = s.length(); 
        
        int cnt  = 0, mxcnt = 0;
        
        for(int r = 0; r < n; r++){
            if(q.count(s[r]) == 0){
                q.insert(s[r]);
                mxcnt = max(mxcnt, r - l + 1);
            }else{
                while(q.count(s[r])){
                    q.erase(s[l]);
                    l++;
                }
                q.insert(s[r]);
            }
        }
            return mxcnt;
        
    }
};