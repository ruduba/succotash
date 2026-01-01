#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; 
    cin>>n;
    int tmp;
    
    int ans[n];
    
    for(int i = 1; i<n+1; ++i){
        
        cin>>tmp;
        ans[tmp - 1] = i;
        
    }
    
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
    
}