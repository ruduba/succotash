#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s, t, q;
    cin>>s>>t>>q;
    
    
    string w = s + t;
    sort(w.begin(), w.end());
    sort(q.begin(), q.end());
    
    
    if(w == q){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
    
    return 0;
    }