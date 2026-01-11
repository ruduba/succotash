#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin>>n;
    
   vector<int> a;
   
   for(int i = 0; i<n; i++){
       int tmp;
       cin>>tmp;
       a.push_back(tmp);
   }
   
   int tmp = a.at(0);
   
   for(int i = 0; i<n-1; i++){
       int q = a.at(i);
       a.at(i) = a.at(i+1);
       a.at(i+1) = a.at(i);
   }
   
   a.at(n-1) = tmp;
   
   
   for(auto x: a){
       cout<<x<<" ";
   }
   
   
   return 0;
    
}

//"TC: O(n), SC: O(1)"