#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "yes";
    
    int t;
    cin>>t;
    
    while(t--){
        string k;
        cin>>k;
        
        transform(k.begin(), k.end(), k.begin(), [] (char c) {return tolower(c);});
        
        if(k == s){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        
        
    }
    
    return 0;
}