#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float si(float p, float r, float t) {
	return (p*r*t)/100.0f;

}

float ci(float p, float r, float t, float n) {
	float c = p*(pow((1+(r/(100.0f * n))), n*t));
	return c - p;
}

int main()
{
	float a, b, c, n;
	scanf("%f%f%f%f", &a, &b, &c, &n);

	printf("Simple interest: %.2f", si(a,b,c));

	printf("\nCompound interest: %.2f", ci(a,b,c,n));

}
