#include <stdio.h>
#include <math.h>

double function(double x)

{

	double f;

	f =  pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

	return(f);

}

void main()

{

	double f, x = 9;

	f = function(x);

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f);

	printf("x = ");

	scanf("%lf", &x);

	f = function(x);

	printf("f = %.4lf", f);

}
