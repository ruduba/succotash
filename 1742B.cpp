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
    string ans;

    if(n == 1){
      ans = "YES";
    }else{
      sort(ar.begin(), ar.end());

      for(int i = 1; i<n; i++){
        if(ar[i-1]<ar[i]) ans = "YES";
        else{
          ans = "NO";
          break;
      }
    }
  }
  cout<<ans<<"\n";
  }

return 0;
}
