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
    
    int x1 = 0, x2 = 0;
    
    for(int i = 0; i<n-1; i++){
        x1 = x1 xor (i+1);
        x2 = x2 xor ar[i];

    }
    
    x1 = x1 xor n;
    
    cout<< (x1 xor x2);
    return 0;
}

//"TC: O(N), SC: O(1)"