#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n = 5;
    
    vector<int> ar = {7, 12, 9, 11, 3};
    
    int min_idx;
    
    for(int i = 0; i<n-1; i++){
        min_idx = i;
        
        for(int j = i+1; j<n; j++){
            
            if(ar[j]<ar[min_idx]) min_idx = j;
            
        }
        
        swap(ar[i], ar[min_idx]);
    }
    
    
    for(auto x: ar){
        cout<<x<<" ";
    }
    
    return 0;
}