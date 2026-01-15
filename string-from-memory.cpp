#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        int days = 0;
        set<char> r;
        
        for(int i = 0; i<s.size(); i++){
            
            r.insert(s[i]);
            if(r.size()>3){
                count++;
                r.clear();
                r.insert(s[i]);
            }
        }
            if(!r.empty()){
                count++;
            }
            cout<<count<<"\n";
        
    }
    return 0;
    }
