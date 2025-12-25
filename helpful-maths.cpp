#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    sort(s.begin(), s.end());
    
    int begin = (s.size()/2);

    for(int i = begin; i<s.size()-1; i++){
        cout<<s[i]<<"+";
    }
    cout<<s[s.size()-1];
    return 0;
}