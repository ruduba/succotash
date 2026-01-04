#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x = 5, y = 5;
    
    for(int i = 1; i<=x; i++){
        int k = 1;
        for(int j = y; j>=i; j--){
            cout<<k++;
        
        }
        cout<<"\n";
    }
    
}