#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin>>n;
   
   int elem = INT_MIN;
   bool sorted = false;
   
   while(n--){
       int tmp;
       cin>>tmp;
       
       if(tmp>=elem){
           sorted = true;
           elem = tmp;
       }else{
           sorted = false;
           break;
       }
   }
   
   cout<<(sorted ? "TRUE" : "FALSE")<<"\n";
   
   return 0;
    
}

//"TC: O(n), SC: O(1)"