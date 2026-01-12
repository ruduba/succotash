#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

	int n;
	cin>>n;

	vector<int> p;
	

	for(int i = 0; i<n; i++) {
		int tmp;
		cin>>tmp;
		p.push_back(tmp);
	}

    map<int, int> q;
    
    for(int i = 0; i<n; i++){
        if(q.find(p[i]) != q.end()){
            q[p[i]]++;
        }else{
            q.insert({p[i], 1});
        }
    }
        
        int ans;
        auto it = q.begin();
        while(it != q.end()){
            if(it->second < 2){
                ans = it->first;
                break;
            }
            it++;
        }
            
        cout<<ans;
        return 0;
    }