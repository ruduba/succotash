#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int r;
        cin>>r;
        int d;
        if(r >= 1900 ){
            d = 1;
        }else if(r >= 1600 && 1900 > r){
            d = 2;
        }else if(r >= 1400 && 1600 > r){
            d = 3;
        }else if(r < 1600){
            d = 4;
        }
        
        cout<<"Division "<<d<<"\n";
        
    }
    
    
    return 0;
}
