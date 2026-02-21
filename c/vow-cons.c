#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    
    char n;
    scanf("%c", &n);
    
    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'){
        printf("%c is Vowel", n);
    }else{
        printf("%c is Consonant", n);
    }


return 0;
}
