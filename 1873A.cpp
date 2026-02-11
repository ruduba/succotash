#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){

    string s;
    cin>>s;

    string k = "abc";
    int cnt  = 0;

    for(int i = 0; i<s.size(); i++){
      if(s[i] != k[i]){
        cnt++;
      }
    }
    if(cnt>2){
      cout<<"NO"<<"\n";
    }else{
      cout<<"YES"<<"\n";
    }

  }


return 0;
}
