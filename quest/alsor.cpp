#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    
    int n;
    cin>>n;
    
    vector<int> nums(n);
    
    for(auto &e: nums){
        cin>>e;
    }
    
    sort(nums.begin(), nums.end());
    
    vector<int> ans;
    
    int l = 0, r = n-1;
    
    while(l<r){
      ans.push_back(nums[l]);
      ans.push_back(nums[r]);
      l++;
      r--;
    }
    
    if(n%2!=0){
      ans.push_back(nums[l]);
    }

    for(auto x: ans){
      cout<<x<<" ";
    }
}