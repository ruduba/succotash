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
    int idx = (n*(n+1))/2;
    int sum = 0;
    for(int i = 1; i<n; i++){
        sum+=i;
    }

    cout<<idx - sum;
    return 0;
}

//"TC: O(N), SC: O(1)"