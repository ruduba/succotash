#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        vector<int> ar(3);
        
        for(auto &e: ar){
            cin>>e;
        }
        
        sort(ar.begin(), ar.end());
        
        for (int i = 0; i<5; i++){
            ar[0]+=1;
            
            sort(ar.begin(), ar.end());
        }
        
        cout<< ar[0]*ar[1]*ar[2] <<"\n";
	
}
return 0;
}