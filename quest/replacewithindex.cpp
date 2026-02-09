#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> t = {5, 3, 2, 1, 0, 4};
    
    vector<int> s(t.size());
    
    for(int i = 0; i<t.size(); i++){
        s[i] = t[t[i]];
    }
    
    for(auto x: s){
        cout<<x<<" ";
    }
    
    return 0;
}
