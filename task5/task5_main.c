#include <stdio.h>

double f(double x);

void main(void)	
{

	double  x = 1;

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f(x));

	printf("x = ");

	scanf("%lf", &x);

	printf("f = %.4lf", f(x));

}
