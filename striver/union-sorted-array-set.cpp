#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

	int n, m;
	cin>>n>>m;

	vector<int> p;
	vector<int> q;
	set<int> ans;
	vector<int> w;

	for(int i = 0; i<n; i++) {
		int tmp;
		cin>>tmp;
		p.push_back(tmp);
	}

	for(int i = 0; i<m; i++) {
		int tmp;
		cin>>tmp;
		q.push_back(tmp);
	}

	for(int i = 0; i<n; i++){
	    if(ans.find(p[i]) == ans.end()){
	        ans.insert(p[i]);
	        w.push_back(p[i]);
	    }
	}
	
	for(int i = 0; i<m; i++){
	    if(ans.find(q[i]) == ans.end()){
	        ans.insert(q[i]);
	        w.push_back(q[i]);
	    }
	}
	
	sort(w.begin(), w.end());
	

	for(auto x: w) {
		cout<<x<<" ";
	}


	return 0;
}

//"TC: O((n+m)log(n+m)), SC: O(m+n)"