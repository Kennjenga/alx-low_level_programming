#include "main.h"

/**
 *positive_or_negative - chech if n is +ve or _ve
 *@n: parameter
 *Return: 0 (Success)
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
