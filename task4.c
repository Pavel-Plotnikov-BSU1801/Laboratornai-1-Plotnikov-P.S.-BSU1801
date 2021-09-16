#include <stdio.h>
#include <math.h>

void function();

double x, result;

void main ()
{
	x = 1;

	function(x);

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", result);

	printf("x =");

	scanf("%lf", &x);

	function(x);

	printf("f = %.4lf", result);

}

void function()

{

	result = pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

}