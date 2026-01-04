#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n;
    cin>>n;
    
    long long c[n];
    
    
    
    for(long long i = 0; i<n; i++){
        cin>>c[i];
        
    }
    
    long long r = n-1, l = 0;
    long long s = 0, d = 0;
    long long lft = 0;
    
    
    if(n==1){
        s =  c[0];
    }else{
    while(l<r){
        long long tmp = 0;
        if(c[l]<c[r]){
            tmp = c[r];
            r--;
        }else{
            tmp = c[l]; 
            l++;
        }
        
        s+= tmp;
        
        //cout<<tmp<<"\n";
        if(c[l]<c[r]){
            tmp = c[r];
            r--;
        }else{
            tmp = c[l]; 
            l++;
        }
        
        d+= tmp;
        
        lft = min(c[l], c[r]);
        //cout<<tmp<<"\n";
    }
    }
    if(n%2==1){
        s+=lft;
    }
    cout<<s<<" "<<d;
    
    return 0;
}