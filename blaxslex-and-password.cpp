#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    vector<int> ans;
    for(int i = 0; i<t; i++){
        int k, x;
        cin >> k >> x; 
        ans.push_back((k*x)+1);
    }
    
    for(auto x: ans){
        cout<<x<<"\n";
    }
    
    
    return 0;
}