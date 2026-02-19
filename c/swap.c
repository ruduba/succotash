#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter your numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before swap\na: %d, b: %d", a, b);
    
    int tmp = a;
    a = b;
    b = tmp;
    
    printf("\nAfter swap\na: %d, b: %d", a, b);

}
 