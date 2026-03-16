#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    int n = s.size();
    
    int mx = 0, i = 0;
    
    while(i<n){
        int j = i;
        
        while(j<n && s[j]==s[i]){
            j++;
        }
        
        int len = j-i;
        
        if(i>0 && j<n){
            mx = max(mx, len);
        }
        
        i = j;
        
    }
    
    cout<<mx<<"\n";

}