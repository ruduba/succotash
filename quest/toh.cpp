#include<bits/stdc++.h>
using namespace std;

void toh(int n, char f, char t, char a){
  if(n==0) return;
  toh(n-1, f, a, t);
  cout<<n<<" "<<f<<" "<<t<<"\n";
  toh(n-1, a, t, f);

}



int main(){
  int n;
  cin>>n;

  toh(n, 'A', 'C', 'B');


return 0;
}
