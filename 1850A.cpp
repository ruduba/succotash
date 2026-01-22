#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        for(int i = 0; i<64; i++){
            char tmp;
            cin>>tmp;
            if(tmp != '.'){
                s+=tmp;
            }
        }
        
        cout<<s<<"\n";
    }
    return 0;
    }