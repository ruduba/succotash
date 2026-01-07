#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, mi, ma, a, cnt = 0;
    cin>>n;
    
    for(int i = 0; i<n; i++){
        cin>>a;
        if(i==0) mi = ma = a;
        else{
            if (a<mi){
                mi = a;
                cnt++;
            }else if(a>ma){
                ma = a;
                cnt++;
            }
        }
    }
    
    cout<<cnt;
    
    return 0;
}