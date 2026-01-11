#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n;
    cin>>n;
    
    vector<int> ar;
    
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        ar.push_back(tmp);
    }
    
    for(int i = 0; i<n-1; i++){
        
        for(int j = 0; j<n-1; j++){
            
            if(ar.at(j)>ar.at(j+1)) swap(ar.at(j), ar.at(j+1));
            
        }
        
    }
    
    for(auto x: ar){
        cout<<x<<" ";
    }
    
    return 0;
}