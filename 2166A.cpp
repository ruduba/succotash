#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        string s;
        
        cin>>n>>s;
        
        int cnt = 0;
        
        int tmp = s[n-1];
        for(int i = n-2; i>=0; i--){
            if(s[i] != tmp) cnt++;
            
        }
        
        cout<<cnt<<"\n";
    }
    
    
    return 0;
}
