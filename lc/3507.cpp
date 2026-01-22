#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        
        int count  = 0;
        
        while(nums.size() > 1){
            bool asc = true;
            int msum = INT_MAX;
            int targetI = -1;
            
            for(size_t i = 0; i<nums.size()-1; ++i){
                int sum = nums[i] + nums[i+1];
                
                if(nums[i]>nums[i+1]){
                    asc = false;
                }
                
                if(sum<msum){
                    msum = sum;
                    targetI = static_cast<int> (i);
                }
                
            }
            
            if(asc) break;
            
            count++;
            nums[targetI] = msum;
            nums.erase(nums.begin() + targetI + 1);
            
        }
  
        return count;

    }
};