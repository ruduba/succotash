#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    string t = "heidi";
    
    int l = 0;
    
    if(s.size() == t.size()){
        cout<<"NO"<<"\n";
        return 0;
    }
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] == t[l]){
            l++;
        }
    }
    
    if(l == t.size()){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
    
        
}

