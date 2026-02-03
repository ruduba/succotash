#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n) {

    if(n == 0){
        cout<<" ";
    }else if(n == 1){
        cout<<1;
    }
    
    vector<vector<int>> t;
    for(int i=0; i<n; i++){
        vector<int> row(i+1, 1);
        for(int j = 1; j<i; j++){
            row[j] = t[i-1][j-1] + t[i-1][j];
        }
        t.push_back(row);
    }


        return t;
    }
};