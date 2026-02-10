#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int max_res = 3;
    int ar[max_res];
    ar[0] = 0;
    ar[1] = 1;
    
    for(int i = 2; i<=n; i++){
        ar[i%max_res] = ar[(i-1)%max_res] + ar[(i-2)%max_res];
        cout<<ar[i%max_res]<<"\n";
    }
    
    return ar[n%max_res];
    
}


int main() {
    
    cout<<fib(5);
    

    return 0;
}
