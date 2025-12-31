#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int n;
    cin>>n;
    
    vector<int> d;
    
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        d.push_back(tmp);
    }
    
    int count = 0;
    
    for(int i = 0; i<n; i++){
        if(d[i]!=d[i+1]) count++;
    }
    
    cout<<count;
    
    return 0;

}