#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
	return b.second<a.second;
}

int main() {

	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;

		vector<int> a(n);
		string ans;

		for(auto &e: a) {
			cin>>e;
		}
		
		if(find(a.begin(), a.end(), k) == a.end()){
		    ans = "NO";
		}else{
		    ans = "YES";
		}
		
		cout<<ans<<"\n";

	}
	return 0;

}
