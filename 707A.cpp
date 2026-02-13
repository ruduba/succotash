#include<bits/stdc++.h>
using namespace std;

int main(){

int n, m;
cin>>n>>m;

unordered_set<char> c = {'C', 'M', 'Y'};

string ans = "#Black&White";

for(int i = 0; i<n; i++){
  for(int j = 0; j<m; j++){
    char tmp;
    cin>>tmp;
    if(c.find(tmp) != c.end()){
      ans = "#Color";
      break;
    }
  }
}

cout<<ans<<"\n";
return 0;
}
