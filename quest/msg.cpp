
#include<bits/stdc++.h>
using namespace std;

int main(){
    string p, q;
    cin>>p>>q;
    
    int cnt = 0;
    
    for(int i = 0; i< p.size(); i++){
      if(p[i]!=q[i]) cnt++;
    }
    
    cout<<cnt;
    
    
}