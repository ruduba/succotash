#include<bits/stdc++.h>
using namespace std;

string yes(int n, string s){
  unordered_set<char> t = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  string ya;
  for(auto x: s){
    if(t.find(x)== t.end()){
      ya+=x;
    }
  }

  return ya;
}

int main(){
  int t;
  cin>>t;


  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;

    string ans = yes(n, s);
    cout<<ans<<"\n";
  }

return 0;
}
