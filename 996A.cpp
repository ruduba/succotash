#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> coins = {1, 5, 10, 20, 100};

    int n;
    cin>>n;

    int cnt = 0;

    int i = coins.size()-1;
    while(n > 0 && i >= 0){
      if(n>=coins[i]) {
        n-=coins[i];
        cnt++;
      }else{
      --i;
      }

    }

    cout<<cnt<<"\n";




return 0;
}
