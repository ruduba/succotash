#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        string s;
	    cin>>n>>s;
	
	    int k = 0;
        int i = 0;
    
        while(i<n){
        
            if(s[i] == '@'){
                k++;
            }
        
            if(s[i+1] == '*' && s[i+2] == '*'){
                break;
            }
        
            i++;
        
        }
        cout<<k<<"\n";
        }
    
	return 0;
}