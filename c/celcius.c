#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float toCelcius(int a){
    return ((a-32)*(5.0f/9.0f));
}

int main()
{
    int n;
    
    printf("Enter temperature in Farenheit: ");
    scanf("%d", &n);
    
    float c = toCelcius(n);
    
    printf("Temperature in Celcius: %.3f", c);
    

}
 