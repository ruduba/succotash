#include<bits/stdc++.h>
using namespace std;

int kSmaller(vector<int> &nums, int k){
	
	int n = nums.size();
	int cnt = 0;
	for(int i = 0; i<n; i++){
	if(nums[i] < k){
    cnt++;
    }
}

	return cnt;
} 

int main() {

vector <int> nums = {7, 8, 1, 2, 3, 4, 9, 10, 11, 67, 89};

int cnt  = kSmaller(nums, 11);

cout<<cnt;


}
