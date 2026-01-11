#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n, k;
   char c;
   
   cin>>n>>k>>c;
   
   
   vector<int> a;
   
   for(int i = 0; i<n; i++){
       int tmp;
       cin>>tmp;
       a.push_back(tmp);
   }
  
    if(c == 'l'){
        for(int j = 0; j<k; j++){
        int tmp = a.at(0);
        for(int i = 0; i<n-1; i++){
        int q = a.at(i);
        a.at(i) = a.at(i+1);
        a.at(i+1) = a.at(i);
        }
        a.at(n-1) = tmp;
        }
    }else if(c == 'r'){
        for(int j = 0; j<k; j++){
        int tmp = a.at(n-1);
        for(int i = n-1; i>0; i--){
        int q = a.at(i);
        a.at(i) = a.at(i-1);
        a.at(i-1) = a.at(i);
        }
        a.at(0) = tmp;
        }
        
        
    }
   
   
   for(auto x: a){
       cout<<x<<" ";
   }
   
   
   return 0;
    
}

//"TC: O(kxn), SC: O(1)"