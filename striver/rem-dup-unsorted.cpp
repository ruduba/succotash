#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin>>n;
   
   unordered_set<int> q;
   vector<int> a;
   
   for(int i = 0; i<n; i++){
       int tmp;
       cin>>tmp;
       
       if(q.find(tmp) == q.end()){
           q.insert(tmp);
           a.push_back(tmp);
       }
       
   }
   
   for(auto x: a){
       cout<<x<<" ";
   }
   
   
   return 0;
    
}

//"TC: O(n), SC: O(n)"