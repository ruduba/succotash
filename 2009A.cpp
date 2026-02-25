#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        
        int a, b;
        cin>>a>>b;
        
        int q = INT_MAX;
        
        for(int i = a; i<=b; i++){
         
         q = min(((i-a)+(i-b)), q); 
        }
        
        cout<<abs(q)<<"\n";
    }
    return 0;
}