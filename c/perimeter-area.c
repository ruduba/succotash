#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter your width: ");
    scanf("%d", &a);
    printf("Enter your height: ");
    scanf("%d", &b);
    printf("The perimeter is %d", 2*(a+b));
    printf("\nThe area is %d", a*b);

}
 