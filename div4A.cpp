#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;
        int count = 0;
        int q = 1;
        while(count<n){
            int tmp = pow(q, 2);
            
            if(ceil(sqrt(tmp)) == floor(sqrt(tmp))){
                cout<<q<<" ";
                count++;
            }
            q++;
            
        }
    }
    
    return 0;
    }