#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n, s, x;
        cin>>n>>s>>x;
        
        int sum = 0;
        
        while(n--){
            int tmp;
            cin>>tmp;
            sum+=tmp;
        }
        string ans;
        
        if(sum == s){
            ans = "YES";
        }else if(sum < s){
            
            int q = s - sum;
            
            if(q%x == 0){
                ans = "YES";
            }else{
                ans = "NO";
            }
        }else{
            ans  = "NO";
        }
        
        
        cout<<ans<<"\n";

    }
    
    return 0;
}