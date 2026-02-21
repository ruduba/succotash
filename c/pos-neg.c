#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    if(n<0){
        printf("%d is Negative", n);
    }else if(n>0){
        printf("%d is Positive", n);
    }else{
        printf("%d is Zero", n);
    }


return 0;
}
