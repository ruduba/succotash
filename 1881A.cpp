#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n, m;
        cin>>n>>m;
        string a, b;
        cin>>a>>b;
        bool found = false;
        for(int i = 0; i<6; i++){
            if(a.find(b) != string::npos){
                cout<<i<<"\n";
                found = true;
                break;
            }
            a+=a;
        }
        
        if(!found){
            cout<<-1<<"\n";
        }
        
    }

}