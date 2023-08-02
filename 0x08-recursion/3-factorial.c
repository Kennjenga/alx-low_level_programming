#include "main.h"

/**
 *factorial - 5! = 1*2*3*4*5
 *@n: parameter
 *
 * Return:zero(1), <0 (-1), >0 (fact)
 */


int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
