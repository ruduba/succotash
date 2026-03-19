// Design a way to sort the list of positive integers in descending order
// according to frequency of the elements. The elements with higher frequency
// come before those with lower frequency. Elements with the same frequency come
// in the same order as they appear in the given list.

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second>b.second;
}

int main(){
    
    int n;
    cin>>n;
    
    vector<int> nums(n);
    
    for(auto &e: nums){
        cin>>e;
    }
    
    unordered_map<int, int> mp;
    
    for(auto x: nums){
        mp[x]++;
    }
    
    // vector<pair<int, int>> v(mp.begin(), mp.end());

    stable_sort(nums.begin(), nums.end(), [&](int a, int b){
      if(mp[a] == mp[b]) return false;
      return mp[a]>mp[b];
    });
    
    for(auto x: nums){
        cout<<x<<"\n";
    }
    
}
