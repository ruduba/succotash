#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    
    long long num, times;
    cin>>num>>times;
    
    for(long long i = 0; i<times; i++){
        
        if(num%10 == 0) num/=10;
        else num-=1;
    }
    
    cout<<num;
    
    return 0;
}