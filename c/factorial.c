#include <stdio.h>

int fac(int n){
    if(n == 0 || n == 1) return 1;
    
    return n * fac(n-1);
}

int main(){
    
    int y;
    scanf("%d", &y);
    
    printf("Factorial of %d is: %d", y, fac(y));


return 0;
}
