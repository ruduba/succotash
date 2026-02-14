#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       string s, q;
       cin>>s;
       
       for(int i = 0; i<s.size(); i++){
           if(s[i] == 'p') q+='q';
           else if(s[i] == 'q') q+='p';
           else q+='w';
       }
       
       reverse(q.begin(), q.end());
       
       cout<<q<<"\n";
        
    }
}