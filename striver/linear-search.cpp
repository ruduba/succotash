#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n, k;
    cin>>n>>k;
    
    vector<int> ar;
    
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        ar.push_back(tmp);
    }
    int idx = -1;
    for(int i = 0; i<n; i++){
        
        if(ar.at(i) == k){
            idx = i;
            break;
        }
    }

    cout<<idx;
    return 0;
}