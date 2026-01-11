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
  
    if(c == 'l'){ // works
        reverse(a.begin(), a.end());
        reverse(a.begin(), a.begin()+k);
        reverse(a.begin()+k, a.end());
        
        }else if(c == 'r'){ //works
        reverse(a.begin(), a.begin()+k);
        reverse(a.begin()+k, a.end());
        reverse(a.begin(), a.end());
    }
   
   
   for(auto x: a){
       cout<<x<<" ";
   }
   
   
   return 0;
    
}

//"TC: O(n), SC: O(1)"