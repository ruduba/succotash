#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int t;
    cin>>t;
    
    string y =  "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

    while(t--){
        string q;
        cin>>q;
        string ans;
            if(y.find(q) != string::npos) ans = "Yes";
            else ans = "No";
        
        
        cout<<ans<<"\n";
        
    }
    
    return 0;
}