#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    string stones;
    cin >> stones;
    
    int chng = 0;
    
    for(int i = 1; i<n; i++){
        if(stones[i-1] == stones[i]) chng++;
    }
    
    cout<<chng;
    
    return 0;
}