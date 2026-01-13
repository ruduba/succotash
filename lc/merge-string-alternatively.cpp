#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int m = word1.size();
        int n = word2.size();
        string ans;
        if(m>n){
            for(int i = 0; i < n; i++){
                ans+=word1[i];
                ans+=word2[i];
            }
            ans.append(word1.begin()+n, word1.end());

        }else{
            for(int i = 0; i < m; i++){
                ans+=word1[i];
                ans+=word2[i];
            }
            ans.append(word2.begin()+m, word2.end());
        }


        return ans;
    }
};