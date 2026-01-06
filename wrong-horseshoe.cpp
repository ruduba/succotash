#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    set<int> shoes;
    
    for(int i = 0; i<4; i++){
        int tmp;
        cin>>tmp;
        shoes.insert(tmp);
    }
    
    cout<< 4 - shoes.size();
    
    return 0;
}
