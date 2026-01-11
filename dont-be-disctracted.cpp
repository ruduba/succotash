#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        int n;
        cin>>n>>s;
      
        string ar;
        int tmp = s.at(0);
        ar+=tmp;
        for(int i = 1; i<n; i++){
            if(s.at(i)!=tmp){
                ar += s.at(i);
                tmp = s.at(i);
            }
        }
        
        unordered_set<char> q;
        string ans = "YES";
        
        for(int i = 0; i<ar.size(); i++){
            if(q.find(ar.at(i)) != q.end()){
                ans = "NO";
            }else{
                q.insert(ar.at(i));
            }
        }
        
        cout<<ans<<"\n";
    }
    
    return 0;
}