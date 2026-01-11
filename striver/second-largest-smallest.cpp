#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin>>n;
   
   int mn1 = INT_MAX, mn = INT_MAX, mx = INT_MIN, mx1 = INT_MIN;
   
   for(int i = 0; i<n; ++i){
       
       int tmp;
       cin>>tmp;
       
       if(tmp>mx){
           mx1 = mx;
           mx = tmp;
       }else if(mx1 < tmp && tmp != mx){
           mx1 = tmp;
       }
       
       if(tmp<mn){
           mn1 = mn;
           mn = tmp;
       }else if(mn1 > tmp && tmp != mn){
           mn1 = tmp;
       }
       
       
       cout<< mn1 << " "<< mx1 <<"\n";
   }
   
   return 0;
    
}

// "TC: O(n), SC: O(1)"