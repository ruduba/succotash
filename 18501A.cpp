#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int a, b, c;
       cin>>a>>b>>c;
       
       int x = a+b;
       int y = b+c;
       int z = a+c;
       
       string ans;
       
       if(x>=10 || y>=10 || z>=10){
           ans = "YES";
       } else{
           ans = "NO";
       }
        
        cout<<ans<<"\n";
        
    }
}