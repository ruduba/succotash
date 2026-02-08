#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums){
    int n = nums.size();
	vector<int> ans(n, 0);
    for(int i = 0; i<n; i++){
        int cnt  = 0;
        for(int j = 0; j<n; j++){
            if(nums[j]<nums[i]) cnt++;
        }
        
        ans[i] = cnt;
        
    }
    return ans;

}

int main() {

vector <int> nums = {7, 8, 1, 2, 3, 4, 9, 10, 11, 67, 89};

vector<int> ans = smallerNumbersThanCurrent(nums);

    for(auto x: ans){
        cout<<x<<" ";
    }

}
