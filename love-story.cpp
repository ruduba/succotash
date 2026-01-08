#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    
    string c = "codeforces";
    
    
    while(t--){
        string s;
        cin>>s;
        int cnt = 0;

        if(c == s){
            cnt = 0;

        }else{
        for(int i = 0; i< c.size(); i++){
            if(s[i] != c[i]){
                cnt ++;
            }
        }
    }
        
        cout<<cnt<<"\n";
    }
    
    
    return 0;
}
