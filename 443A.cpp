#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s;
   getline(cin, s);
   
   set<char> t;
   int cnt = 0;
   
   for(auto x: s){
       
       if(x>='a' && x<= 'z' && t.find(x) == t.end()){
           t.insert(x);
           cnt++;
       }

   }
    

    cout<<cnt;
    
    return 0;
    
}