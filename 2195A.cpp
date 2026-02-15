#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

    vector<int> ar(n);
    for(auto &e: ar){
      cin>>e;
    }

    sort(ar.begin(), ar.end());

    string ans = "NO";

    for(int i = 0; i<n; i++){
      if(67/(float)ar[i] == 1.0){
        ans = "YES";
        break;
      }
    }


    cout<<ans<<"\n";
  }


return 0;
}
