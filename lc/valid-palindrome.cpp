#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {

    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
    s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
    
    //transform(s.begin(), s.end(), s.begin(), [](char c) {return tolower(c);});

        
        int l = 0, r = s.size() - 1;

        bool valid = true;
        while(l<r){
            if(tolower(s[l]) != tolower(s[r])){
                valid = false;
                break;
            }
            
            l++;
            r--;
        }
        
        
        
        return valid;
        
        
    }
};