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
    
    int j;
    
    for(int i = 0; i<n; i++){
        if(a.at(i) == 0){
            j = i;
            break;
        }
    }
    
    for(int i = j+1; i<n; i++){
        if(a.at(i)!=0){
            swap(a.at(i), a.at(j));
            j++;
        }
    }
       
   for(auto x: a){
       cout<<x<<" ";
   }
   return 0;
    
}

//"TC: O(n), SC: O(1)"