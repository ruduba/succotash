#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int l = 0, r = height.size() - 1; 
       int area = INT_MIN;
       
        while(l<=r){
           
        int len =  min(height[l], height[r]);
        int wid = r - l;
        
        area = max(len*wid, area);
           
            if(height[l] > height[r]){
                r--;
            }else{
                l++;
            }

       }
       
       return area;
    }
};