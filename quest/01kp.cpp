#include <bits/stdc++.h>
using namespace std;



int kp(int n, int cap, vector<int> & wt, vector<int> &v, vector<vector<int>> &f) {

	if(n == 0 || cap == 0) {
		return 0;
	} else if(f[n][cap] != -1) {
		return f[n][cap];
	} else if(wt[n-1]>cap) {
		return kp(n-1, cap, wt, v, f);
	}

	int chus = v[n-1] + kp(n-1, cap-wt[n-1], wt, v, f);
	int notchus =  kp(n-1, cap, wt, v, f);

	f[n][cap] = max(chus, notchus);

	return f[n][cap];
}


int main() {
	vector<int> val = {1, 2, 3};
	vector<int> wt = {4, 5, 1};
	int W = 4;
	int n = val.size();
	
    vector<vector<int>> f(n+1, vector<int>(W+1, -1));
    
	cout << kp(n, W, wt, val, f) << endl;
	return 0;
}
