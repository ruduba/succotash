#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n;
    cin>>n;
    
    vector<int> ar;
    
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        ar.push_back(tmp);
    }
    
    int mxOn = 0, cnt  = 0;
    

    
    for(int i = 0; i<n; i++){
        if(ar.at(i) == 1){

            cnt++;
        }else{
            
            cnt = 0;
        }
        mxOn = max(cnt, mxOn);
    }
    
    
    cout<<mxOn;
    return 0;
}