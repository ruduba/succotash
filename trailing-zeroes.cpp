#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n;
    cin>>n;
    int m = 5;
    int count = 0;
    
    while(m <= n){
        count += floor(n/m);
        m*=5;
    }
    
    cout<<count;
    
}