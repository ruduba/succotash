#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int mx = 0;
    while(n--){
        int tmp;
        cin>>tmp;
        
        mx = max(tmp, mx);
    }
    
    cout<<mx;
    
}

//O(n)