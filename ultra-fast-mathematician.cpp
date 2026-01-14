#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string x, y;
    cin>>x>>y;
    
    string ans;
    int tmp = 0;
    for(int i = 0; i<x.size(); i++){
        int tmp;
        if(x[i] == y[i]){
            tmp = 0;
        }else{
            tmp = 1;
        }
        
        cout<<tmp;
    }
        
    
    
    return 0;
}