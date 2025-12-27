#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    vector<long long> ar;
    long long n, cnt = 0;
    
    cin>>n;
    
    for(int i = 0; i<n; i++){
        int tmp = 0;
        cin>>tmp;
        ar.push_back(tmp);
    }
    
    for(long long i = 1; i<n; i++){
        
        if(ar.at(i-1) > ar.at(i)) {
        cnt += (ar.at(i-1) - ar.at(i));
        
        ar.at(i) += (ar.at(i-1) - ar.at(i));}
        
    }
    
    cout<<cnt;
    
    return 0;
}


//3 2 5 1 7
 // i