#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n = 5;
    
    for(int i = 0; i< 2*n; i++){
        
        int comp;
        
        if(i<n) comp = n-i;
        else comp = i-n;
        
        for(int j=0; j<comp; j++){
            cout<<" ";
        }
        for(int k=0; k< n - comp; k++){
            cout<<"*";
        }
        cout<<"\n";
    }



    return 0;
}