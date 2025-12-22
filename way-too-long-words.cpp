#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    cout<<"\n";
    string strings[n];
    for(int i = 0; i<n; i++){
        cin>>strings[i];
    }
    for(int i = 0; i<n; i++){
        long long siz = strings[i].length();
        if(siz>10){
            cout<<strings[i][0] + to_string(siz-2) + strings[i][siz-1] <<" ";
        }else{
            cout<<strings[i]<<" ";
        }
        cout<<"\n";
    }
    puts("");
    return 0;
}

//