#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    string s, p;
    cin>>s>>p;
    
    reverse(p.begin(), p.end());
    
    if(s == p){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}