#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a, b;
    cin>>a>>b;
    
    int yrs = 1;
    
    while(true){
        a = 3*a;
        b = 2*b;
        if(a<=b){
            yrs++;
        }else{
            break;
        }
        
    }
    
    cout<<yrs;
    
    return 0;
}