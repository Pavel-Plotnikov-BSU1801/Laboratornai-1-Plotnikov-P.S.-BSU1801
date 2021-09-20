#include <stdio.h>
#include "func.h"

extern double x,result;

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
