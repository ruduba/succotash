#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    
    while(t--){
    char c;
    cin>>c;
   
    string r = "codeforces";
   
    if(r.find(c) != string::npos) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    }
    
    return 0;
    
}