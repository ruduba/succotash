#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
cout<<"\n";
int count = 0;

for(int i = 0; i<n; i++){
    int friends = 0;
    int res = 0;
    while(friends<3){
        int temp;
        cin>>temp;
        res+=temp;
        friends++;
    }
    if(res>=2) count++;
    friends = 0;
    res = 0;
}

    cout<<count<<" ";

return 0;
}