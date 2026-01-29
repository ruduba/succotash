#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<string, int> h = {
        {"Tetrahedron", 4}, 
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };
    
    
    int n;
    cin>>n;
    int sum = 0;
    
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        sum+= h[s];
    }
    
    cout<<sum;
    
    return 0;
}

//to submit