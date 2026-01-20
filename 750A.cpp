#include<bits/stdc++.h>
using namespace std;


int main() {

	int n, k;
	cin>>n>>k;

	int h = 4*60 - k;
	int y = 5*((n+1)*(n))/2;
    

    if(h >= y){
        cout<<n;
        return 0;}

	while(h < y){
	    n--;
	    y = 5*((n+1)*(n))/2;
	}
    
    cout<<n;
    
	return 0;
}