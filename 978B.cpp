#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int ans = 0, cnt = 0;
    
    if(n<=2){
        ans = 0;
    }else{
        for(int i = 0; i<n; i++){
            s[i] == 'x' ? cnt++ : cnt = 0;
            if(cnt>=3 && s[i] == 'x') ans++;
        }
    }
    
    cout<<ans;
    

    return 0;
}