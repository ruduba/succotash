#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    string s;
    cin>>n>>s;
    int cnt = 0;

    unordered_set<char> p;


    for(int i = 0; i<n; i++){
      if(p.find(s[i]) == p.end()){
        cnt+=2;
        p.insert(s[i]);
      }else{
        cnt++;
      }
    }

    cout<<cnt<<"\n";

  }


return 0;
}
