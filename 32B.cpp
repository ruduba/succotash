#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, ans;
    cin>>s;
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '.'){
            ans+='0';
        }else{
            string tmp = "";
            tmp+=s[i];
            tmp+=s[i+1];
            
            if(tmp == "-."){
                ans+='1';
            } else ans += '2';
            i++;
        }
    }
    
    cout<<ans;
    
    
}