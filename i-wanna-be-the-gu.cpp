#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, p, q;
    cin>>n>>p;
    
    set<int> l;
    
    for(int i = 0; i<p; i++){
        int tmp;
        cin>>tmp;
        l.insert(tmp);
    }
    
    cin>>q;
    for(int i = 0; i<q; i++){
        int tmp;
        cin>>tmp;
        l.insert(tmp);
    }
    
    if(l.size() == n){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}