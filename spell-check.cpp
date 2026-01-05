#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    
    string cmp = "Timru";
    
    while(t--){
        
        int n;
        string name, ans;
        cin>>n>>name;
        if(name.find("T")!= string::npos){
        
        sort(name.begin(), name.end());
        
        ans = (name==cmp ? "YES" : "NO");
        
        }else{
            ans = "NO";
        }
        
        cout<<ans<<"\n";
    }
    
    return 0;
}
