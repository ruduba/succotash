#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){

      int a, b, ans = 0;
      cin>>a>>b;
      int tmp;
      if(a%b == 0){
          ans  = 0;
      }else{
          ans = b - (a%b);
          
      }
    
        cout<<ans<<"\n";
  }


return 0;
}