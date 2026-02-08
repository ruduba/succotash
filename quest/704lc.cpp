#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target){
int l = 0, h = nums.size()-1;
while(l<=h){
	int m = (l+h)/2;
	if(nums[m] == target) return m;
	else if(target < nums[m]) h = m - 1;
	else l = m + 1;
}
return -1;
}


int main() {

vector <int> nums = {7, 8, 1, 2, 3, 4, 9, 10, 11, 67, 89};

cout<<search(nums, 11);

}
