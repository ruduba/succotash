// An alternate sort of a list consists of alternate elements 
// (starting from the first position) of the given list after sorting 
// it in an ascending order. You are given a list of unsorted elements. 
// Write an algorithm to find the alternate sort of the given list.
// An alternate sort of a list consists of alternate elements 
// (starting from the first position) of the given list after sorting 
// it in an ascending order. You are given a list of unsorted elements. 
// Write an algorithm to find the alternate sort of the given list.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    int k;
    cin>>k;
    
    int mxWins = INT_MIN, curWins = 0, ze = 0;
    
    int l = 0, r = 0;
    
     for(int r = 0; r<n; r++){
       if(s[r] == '0') ze++;
       while(ze>k){
         if(s[l] == '0'){
             ze--;
         } l++;
       }
      mxWins = max((r-l+1), mxWins);
    }

    cout<<mxWins<<"\n";
    
    if(mxWins == 0) cout<<1;
    
    l = 0, ze = 0;
    
    int ways = 0;
    
  for(int r = 0; r<n; r++){
    if(s[r] == '0'){
      ze++;
    }
    while((r-l+1)>mxWins){
      if(s[l] == '0') ze--;
      l++;
    }
    
    if((r-l+1) == mxWins && ze <= k) ways++;
    
  }
    
    
    cout<<ways;
    
    
}