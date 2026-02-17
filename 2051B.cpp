#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, a, b, c;
        cin>>n>>a>>b>>c;
        
        int sum = a+b+c;
        
        int d = floor(n/sum) * 3;
        
        int ans;
        
        if(n%sum == 0) ans = d;
        else if(n % sum <= a) ans = d+1;
        else if(n % sum <= a + b) ans = d+2;
        else ans = d+3;
        
        cout<<ans<<"\n";
        
    }
    return 0;
}