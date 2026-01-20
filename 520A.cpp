#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    string s;
	cin>>n>>s;
	
	
	if(n<26){
	    cout<<"NO";
	    return 0;
	}
	
	string r = "abcdefghijklmnopqrstuvwxyz";
	
	transform(s.begin(), s.end(), s.begin(), [] (char c){ return tolower(c);});
	sort(s.begin(), s.end());
	
	char tmp = s[0];
	string t;
	t+=tmp;
	
	
	for(auto x: s){
	    if(x!=tmp){
	        t += x;
	        tmp = x;
	    }
	}
	
	if(t == r){
	    cout<<"YES";

	}else{
	    cout<<"NO";
	}

	return 0;
}