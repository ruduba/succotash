#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, sum = 0, tot = 0;
    
    cin>>n;
    
    while(n--){
        int tmp;
        cin>>tmp;
        
        if(tmp == -1){
            if(!tot) sum++;
            else tot--;
        }else tot+=tmp;

    }
    
    
    cout<<sum;
}