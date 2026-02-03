#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

    map<int, int> m;
    
    for(long long i = 0; i<nums.size(); i++){
        m[nums[i]]++;
    }
    
    int n = nums.size() / 2;
    
    for(auto x: m){
        if(x.second > n){
            return x.first;
        }
    }
        return 0;
    }
};