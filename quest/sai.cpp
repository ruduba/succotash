#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

    vector<string> names(n);

    for(auto &e: names){
      cin>>e;
    }

    sort(names.begin(), names.end());

    string first = names[0], last = names[n-1];

    string ans;

    for(int i = 0; i<names[0].size(); i++){
      if(first[i]!=last[i]){
        break;
      }
      ans+=first[i];
    }

    cout<<ans<<"\n";

  }


return 0;
}
