#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    
    if(a>b && a>c){
        printf("Maximum is %d", a);
    }else if(b>a && b>c){
        printf("Maximum is %d", b);
    }
    else{
        printf("Maximum is %d", c);
    }


return 0;
}
