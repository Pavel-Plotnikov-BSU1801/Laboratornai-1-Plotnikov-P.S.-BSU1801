#include <stdio.h>
#include <math.h>

double function(double x)

{

	double f;

	f = pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

	return(f);

}