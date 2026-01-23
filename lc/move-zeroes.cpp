#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int> nums(n);
    
    for(auto &e: nums){
        cin>>e;
    }

    int r = 0;
    
    for(int i = 0; i<nums.size(); i++){
        
        if(nums[i]!=0){
            swap(nums[i], nums[r]);
            r++;
        }
 
        for(auto x: nums){
            cout<<x<<" ";
        }
    cout<<"\n";
    }
    
    return 0;
    
}