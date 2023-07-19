#include "main.h"
#include <stdio.h>

/**
 *main - main func
 *
 *Return: 0 (success)
 */

int main(void)
{
	int x = 1023;
	int sum = 0;

	while (x > 0)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
		x--;
	}
	printf("%d\n", sum);
	return (0);
}
