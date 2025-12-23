#include<bits/stdc++.h>
using namespace std;

int cmp(string a, string b){
    
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c){
        return tolower(c);
    });

    transform(b.begin(), b.end(), b.begin(), [](unsigned char c){
        return tolower(c);
    });
    
    
    if(a > b) return 1;
    if(a < b) return -1;
    else return 0;
}


int main() {

    string a, b;
    cin>> a >> b;
    
    cout << cmp(a, b) << " ";

	
	return 0;
}