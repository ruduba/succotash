#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin>>n;
    
   vector<int> a;
   int k = INT_MIN;
   
   for(int i = 0; i<n; i++){
       int tmp;
       cin>>tmp;
       
       if(tmp != k){
           a.push_back(tmp);
           k = tmp;
       }
       
   }
   
   for(auto x: a){
       cout<<x<<" ";
   }
   
   return 0;
    
}

//"TC: O(n), SC: O(1)"