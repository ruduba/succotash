#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    
    long long num, tim = 0;
    cin>>num;
    string nums = to_string(num);
    
    for(auto x: nums){
        if(x == '4' || x == '7') tim++;
    }
    
    string tims = to_string(tim);
    
    bool flag = false;
    
    for(auto x: tims){
        if(x == '4' || x == '7'){
            flag = true;
        }else flag == false;
    }
    
    if(flag) cout<< "YES";
    else cout<<"NO";
    
    return 0;
}