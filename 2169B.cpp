#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s;
        long cnt = 0, mxcnt = 0;
        
        for(long i = 0; i<s.size(); ++i){
            if(s[i-1]=='>' &&s[i] == '*') mxcnt = -1;
            else if(s[i-1]=='>' &&s[i] == '<') mxcnt = -1;
            else if(s[i-1]=='*' &&s[i] == '<') mxcnt = -1;
            else if(s[i-1]=='*' &&s[i] == '*') mxcnt = -1;
        }
        
        for(long i = 0; mxcnt>=0 && i<s.size(); ++i){
            if(s[i] == '<') cnt  = 0;
            else{
                ++cnt;
                mxcnt = (mxcnt > cnt ? mxcnt : cnt);
            }
            
        }
        
        
        cnt = 0;
        
        for(long i = 0; mxcnt>=0 && i<s.size(); ++i){
            if(s[i] == '>') cnt  = 0;
            else{
                ++cnt;
                mxcnt = (mxcnt > cnt ? mxcnt : cnt);
            }
            
        }

        
        cout<<mxcnt<<"\n";
	}

	return 0;
}