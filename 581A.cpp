#include<bits/stdc++.h>
using namespace std;

int main(){


      int a, b, ans = 0;
      cin>>a>>b;
      int tmp;
      int sct = 0, dct = 0;
      
      dct = min(a, b);
      
      sct = max((a-min(a, b)) / 2, (b-min(a,b))/2); 

    cout<<dct<<" "<<sct;

return 0;
}