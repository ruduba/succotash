#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> k(n);
        vector<int> p(n);
        for (int i = 0; i<n; i++){
            cin>>k[i];
            p[i] = k[i];
        }
        
        sort(p.begin(), p.end());

        bool flag = true;
        
        for(int i = 0; i<n; i++){
            if(k[i]%2 != p[i]%2){
                flag = false;
                break;
            } 
        }
        
        cout<<(flag ? "YES" : "NO")<<"\n";
        
    }
    return 0;
    }