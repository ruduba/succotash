#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int t;
    cin>>t;
    
    while(t--){
        int a, b;
        cin>>a>>b;
        int s;
        if(a == 0){
            s = 1;
        }else if(b == 0){
            s = a+1;
        }else{
            s = (a + 2*b) + 1;
        }
        
       cout<<s<<"\n";
        
    }
    
    return 0;
}