#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    cout << "\n";
    int x = 0;
    
    for(int i = 0; i<n; i++){
        string temp;
        cin >> temp;
        
        if(temp[1] == '+') x++;
        else x--;
        
        cout<<"\n";
    }
    
    cout<<x<<" ";
    
    return 0;
}