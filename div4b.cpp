#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;
        
        int mx = INT_MIN;
        
        for(int i = 0; i<n; i++){
            int tmp;
            cin>>tmp;
            mx = max(tmp, mx);
        }

        cout<<mx*n<<"\n";

    }
    
    return 0;
    }