#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int sumo(int n){
    if(n <= 0) return 0;
    
    return n + sumo(n-1);
}

int sumfun(int n){
    int s = 0;
    for(int  i = 1; i<=n; i++){
        s+=i;
    }
    
    return s;
}

int main(){
    
    int a;
    scanf("%d", &a);
    
    int i = 1, sum =0;
    while(i <=a){
        sum+=i;
        i++;
    }
    
    printf("\nSum using while loop: %d", sum);
    
    sum = 0;
    
    for(int i = 1; i<=a; i++){
        sum+=i;
    }
    
    printf("\nSum using for loop: %d", sum);
    
    sum = 0;
    
    sum = sumo(a);
    printf("\nSum using recursion: %d", sum);
    
    sum = 0;    
    
    sum = sumfun(a);
    printf("\nSum using recursion: %d", sum);    

return 0;
}
