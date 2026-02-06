#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int l = 0, r = s.size()-1;
        
        for(int i = 0; i<s.size(); i++){
            l = i;
            if(s[i] == '1') break;
        }

        for(int i = s.size()-1; i>=0; i--){
            r = i;
            if(s[i] == '1') break;
        }      
        
        int cnt = 0;
        for(int i = l; i<r; i++){
            if(s[i] == '0'){
                cnt++;
            }
        }
        
        cout<<cnt<<"\n";
        
    }
    
    return 0;
}
