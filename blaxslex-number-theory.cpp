#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<long long> a;
    long long largest;
    for(int i = 0; i<n; i++) {
        long long temp;
        cin>>  temp;
        a.push_back(temp);
    }
    
    sort(a.begin(), a.end());
    
    largest = max(a.at(0), (a.at(1) - a.at(0)));

    cout<<largest<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    
    return 0;
}

