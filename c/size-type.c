#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float toCelcius(int a){
    return ((a-32)*(5.0f/9.0f));
}

int main()
{
    int n;
    
    printf("Size of int: %d", sizeof(int));
    printf("\nSize of float: %d", sizeof(float));
    printf("\nSize of char: %d", sizeof(char));
    printf("\nSize of double: %d", sizeof(double));
    
    int intType;
    
    int *ptr = &intType;
    
    unsigned long long start = (unsigned long long)ptr;
    ptr++;
    unsigned long long end = (unsigned long long)ptr;
    
    printf("\nInt: %llu", (unsigned long long)(end-start));

}
 