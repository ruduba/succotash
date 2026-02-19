#include <stdio.h>

int main()
{
    int n, cnt = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    
    printf("\n->This is the O(n) method to determine primality\n");
    for(int i = 1; i<=n; i++){
        if(n%i == 0) cnt++;
    }
    
    if(cnt>2){
        printf("-->%d is not Prime\n", n);
    }else{
        printf("-->%d is Prime\n", n);
    }
    cnt = 0;
    printf("\n->This is the O(sqrt(n)) method to determine primality\n");
    
    if(n<=1) printf("-->%d is not Prime\n", n);
    else{
        for(int i = 2; i*i<=n; i++){
            if(n%i == 0) cnt++;
        }
        if(cnt>0){
        printf("-->%d is not Prime\n", n);
        }else{
        printf("-->%d is Prime\n", n);
    }
  
    }
}
 