#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int x = (k*l)/(n*nl), y = (c*d) / n, z = p/(np*n);
    
    
    int ans = min({x, y, z});
    
    cout<<ans;
    
    
    
    
}