#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &memo){
    
    if(n<=1) return n;
    
    if(memo[n] != INT_MAX) return memo[n];
    
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    
    return memo[n];
    
}


int main(){
	vector<int> m(8, INT_MAX);
	cout<<fib(7, m);
	
	return 0;

}