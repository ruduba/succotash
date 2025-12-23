#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k;
    int count = 0;
    cin >> n >> k;
    vector<int> a;

    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    
    for(auto x: a){
        if(x >=  a.at(k-1) && x != 0) count++;
        if(x < a.at(k-1)) break;
    }
    
    cout << count << " ";
    return 0;
}