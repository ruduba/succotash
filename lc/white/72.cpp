#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string a, string b) {

    int m = a.size(), n = b.size();

    vector<vector<int>> d(m+1, vector<int>(n+1));
    
    for(int i = 1; i<=m; i++){
        d[i][0] = i;
    }
    
    for(int j = 1; j<=n; j++){
        d[0][j] = j;
    }
    
    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=n; j++){
            if(a[i-1] == b[j-1]){
                d[i][j] = d[i-1][j-1];
            }else{
                d[i][j] = min({d[i-1][j-1], d[i-1][j], d[i][j-1]}) + 1;
            }
        }
    }
        return d[m][n];
    }
};