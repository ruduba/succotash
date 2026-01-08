#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>> n;
        
        vector<int> a(n);
        
        for(int &e: a){
            cin>>e;
        }
        
        vector<int> v = a;
        
        sort(a.begin(), a.end());
        
        for(int i = 0; i<n; i++){
            if(v[i]!=a[1]){
                cout<<i+1<<"\n";
                break;
            }
        }
        
        
    }
    
    
    return 0;
}
