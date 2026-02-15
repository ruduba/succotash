#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string n1, n2;
    cin>>n1>>n2;
    int s = 0;

    for(int i = 0; i<n1.size(); i++){
      if(n1[i] != n2[i]){
        s++;
      }
    }

    cout<<s<<"\n";
  }


return 0;
}
