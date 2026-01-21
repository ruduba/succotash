#include<bits/stdc++.h>
using namespace std;

int main(){
  
  string s;
  cin>>s;
  
  sort(s.begin(), s.end());
  
  int tmp = unique(s.begin(), s.end()) -  s.begin();
  
  if(tmp%2 != 0){
      cout<<"IGNORE HIM!";
  }else{
      cout<<"CHAT WITH HER!";
  }
  
  return 0;
}