#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n = 5;
    
    for(int i = n; i>=0; i--){
        for(int j = n-i; j>=0; j--){
            cout<<" ";
        }
        for(int k = 2*i; k>=0; k--){
            cout<<"*";
        }
        cout<<"\n";
    }




    return 0;
}