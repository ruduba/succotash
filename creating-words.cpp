#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        string a;
        string b;
        
        cin>>a>>b;
        
        char tmp;
        
        tmp = a.at(0);
        a.at(0) = b.at(0);
        b.at(0) = tmp;
        
        
        cout<<a<<" "<<b<<"\n";
        
    }
    return 0;
}