#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  unordered_set<char> v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  cin.ignore();
  while(t--){
      string s;
      getline(cin, s);

      string ans;

      for(auto x: s){
        if(v.find(x) == v.end()){
          ans+=x;
        }
      }
     cout<<ans<<"\n";


  }


return 0;
}
