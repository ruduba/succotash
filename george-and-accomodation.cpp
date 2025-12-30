#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int n;
    cin>>n;
    
    int count = 0;
    
    while(n--){
        int a, b;
        cin>>a>>b;
        
        if(b-a>=2){
            count++;
        }
    }
    
    cout<<count;
    return 0;
}