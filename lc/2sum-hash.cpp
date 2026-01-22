#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hash;
        for(int i = 0; i<nums.size(); i++){
            
            int cmp = target - nums[i];
            
            if(hash.find(cmp) != hash.end()){
                return {hash[cmp], i};
            }
            hash[nums[i]] = i;
        }
        
        return {};
        
    }
        
};