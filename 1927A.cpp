#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        string w;
        cin>>n>>w;
        
        int l = 0, r = n-1;
        
        for(int i = 0; i<n-1; i++){
            if(w[i] == 'B') break;
            l++;
        }
        
        while(l<=r){
            if(w[r] == 'B') break;
            r--;
        }
        
        cout<<(r-l+1)<<"\n";
      
    }
    return 0;
}