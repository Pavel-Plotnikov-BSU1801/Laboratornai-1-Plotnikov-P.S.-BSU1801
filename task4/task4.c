#include <stdio.h>
#include <math.h>

double x, result;

void f(void);

void main (void)
{
	x = 1;
	
	f();

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", result);

	printf("x =");

	scanf("%lf", &x);

	f();

	printf("f = %.4lf", result);

}

void f(void)

{

	result = pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

}