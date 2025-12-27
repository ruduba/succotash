#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    
    string s;
    cin >> s;
    
    int upper = 0, lower = 0;
    
    for(auto x: s){
        if(x >= 'A' && x<= 'Z') upper++;
        else if(x >= 'a' && x<= 'z') lower++;
    }
    
    if(upper>lower){
        transform(s.begin(), s.end(), s.begin(), [] (unsigned char c) {return toupper(c);});
    }else if(lower>upper){
        transform(s.begin(), s.end(), s.begin(), [] (unsigned char c) {return tolower(c);});
    }else transform(s.begin(), s.end(), s.begin(), [] (unsigned char c) {return tolower(c);});
    
    cout<<s;
    
    return 0;
}