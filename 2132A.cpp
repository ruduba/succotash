#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        string a,b;
        cin>>n>>a>>m>>b;
        
        string q;
        cin>>q;
        
        for(int i = 0; i<q.size(); i++){
            if(q[i] == 'D'){
                a = a + b[i];
            }else{
                a = b[i] + a;
            }
        }
        
        cout<<a<<"\n";

    }
    
    
    
    return 0;
}

//to submit