#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& s) {
        int n = s.size();
        int l = 0, r = n-1;
        
        int minD = 0, maxD = 0;
        int mn = 0, mx = 0;
        
        int lst = INT_MAX;
        int op = 0;
        int p = 0;
        
        for(int i = 0; i<s.size(); i++){
            if(s[i]<lst){
                lst = s[i];
            }
            
            p = s[i] - lst;
            op = max(op, p);
        }
        return op;

    }
};