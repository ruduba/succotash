#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
    sort(s.begin(), s.end());
    
    int q = s.size();
    
    string first = s[0], last = s[q-1], ans = "";
    
    for(int i = 0; i<min(first.size(), last.size()); i++){
        if(first[i] != last[i]){
            return ans;
        }
        ans+=first[i];
        
    }
    
    return ans;
    
        
    }
};