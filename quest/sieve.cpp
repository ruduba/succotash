#include<bits/stdc++.h>
using namespace std;

bool util(int n){
    if(n<=1) return false;
    else{
        for(int i = 2; i<=sqrt(n); i++){
            if(n%i == 0) return false;
        }
    }
    return true;

}

int main(){
  int t;
  cin>>t;

  for(int i = 0; i<t; i++){
    if(util(i)) cout<<i;
  }


return 0;
}