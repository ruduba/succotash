#include <stdio.h>

int main()
{
    float a, b;
    
    printf("Enter your floats (2): ");
    scanf("%f%f", &a, &b);
    
    printf("%.3f", a*b);
}
 