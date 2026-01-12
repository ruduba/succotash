#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int n;
    cin>>n;
    int tmp = n;
    string ans;
    while(n>1){
        
        if(n>1){
            ans+="I hate that ";
        }
        n--;
        if(n>1){
            ans+="I love that ";
        }
        n--;
        
    }
    
    if(tmp%2 == 0){
        ans+="I love it";
    }else{
        ans+="I hate it";
    }
    
    cout<<ans;
    
    return 0;
}