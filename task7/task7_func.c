#include <math.h>
#include "func.h"

double x,result;

void f(void)

{
	result = pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

}