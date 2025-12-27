#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    
    int count;
    string s;
    cin>>count>>s;
    
    int countA = 0;
    
    for(auto x: s){
        if(x == 'A') countA++;
    }
    
    
    
    if(countA>(count - countA)) cout<<"Anton";
    else if((count - countA)>countA) cout<<"Danik";
    else cout<<"Friendship";
    
    return 0;
}