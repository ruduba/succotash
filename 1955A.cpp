#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n, a, b;
	    cin>>n>>a>>b;
	
	    int ans = 0;
	    
	    
	    if(n%2 == 0){
	        
	        ans = min( n*a ,(n/2)*b);
	       
	       
	    }else{
	        
	        ans = ((n-1)/2)*b;
	        ans += a*1;
	        
	        ans = min(ans, n*a);
	    }
	    
	    cout<<ans<<"\n";
	    
        }
    
	return 0;
}