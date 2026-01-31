#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
    
        int cnt = 0;
    
        vector<int> q;
    
        while(n>0){
            int tmp = n%10;
            q.push_back(tmp);
        
            if(tmp != 0) cnt++;
            n/=10;
        }
    
        reverse(q.begin(), q.end());
    
        cout<<cnt<<"\n";
    
        for(int i = 0; i<q.size(); i++){
            if(q[i]!=0){
                cout<< q[i] * pow(10, q.size()-(i+1))<<" ";
            }
        }
        
        cout<<"\n";
        
    }
    

    return 0;
}