
#include<bits/stdc++.h>
using namespace std;

int main(){
    string p, q;
    cin>>p>>q;
    
    int cnt = 1;
    
    if(p.size() != q.size()){
      cnt = -1;
      return 0;
    } 

    string m = q + q;
    
    size_t w = m.find(p);
    
    if(w == string::npos){
      cnt = -1;
    }
    
    cout<<cnt;
    
}