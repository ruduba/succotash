#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float si(int p, int r, int t){
    return (p*r*t)/100.0f;
    
}

float ci(int p, int r, int t, int n){
    float c = p*(1+(r/n))^(n*t);

    return c;
}

int main()
{
    int a, b, c, n;
    scanf("%d%d%d", &a, &b, &c, &n);
    
    printf("Simple interest: %.2f", si(a,b,c));

    printf("Compound interest: %.2f", ci(a,b,c, n));

}
 