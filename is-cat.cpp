#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int t;
    cin>>t;
    
    string q = "meow";
    
    while(t--){
        string m;
        int n;
        cin>>n>>m;
        transform(m.begin(), m.end(), m.begin(), [] (char c){ return tolower(c);});
        
        string ar;
        char tmp = m.at(0);
        ar+=tmp;
        for(int i = 1; i<n; i++){
            if(m.at(i)!=tmp){
                ar += m.at(i);
                tmp = m.at(i);
            }
        }
        
        if(ar == q){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

        
    }
    
    return 0;
}