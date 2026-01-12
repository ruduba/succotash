#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n = 5;
    vector<int> ar = {10, 3, 2, 8, 4};
    
    for(auto x: ar){
        cout<<x<<" ";
    }
    cout<<"\n";
    
    int key, j;
    
    for(int i = 1; i<n; i++){
        
        key = ar[i];
        j = i;
        
        while(j > 0 && ar[j-1] > key){
            ar[j] = ar[j-1];
            j--;
        }
        
        ar[j] = key;
        for(auto x: ar){
        cout<<x<<" ";
    }
    cout<<"\n";
    }
    
    return 0;
}

// O(N) best, O(N^2) worst