#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int r, c;
    cin>>r>>c;
    
    
    bool snake = false;
    
    for(int i = 1; i<=r; i++){
       
        for(int j = 1; j<=c; j++){
            if(i%2 == 1) snake = true;
            else{
            if(i%4 == 2) snake =  (j == c);
            if(i%4 == 0) snake =  (j == 1);
            }
            
            if(snake) cout<<"#";
            else cout<<".";
        }
        cout<<"\n";
    }
    
    return 0;
}