#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    string ref = "314159265358979323846264338327";
    
    while(t--){
        string p;
        cin>>p;
        
        int cnt = 0;
        
        for(int i = 0; i<p.size(); i++){
            if(p[i] == ref[i]) cnt++;
            else{
                break;
            }
        }
       
    cout<<cnt<<"\n";
    }
    return 0;
}