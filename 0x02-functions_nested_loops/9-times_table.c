#include "main.h"

/**
 *times_table - multiples of (1..9)
 *
 *Return:
 */

void times_table(void)
{
	int n;
	int m, r;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			r = n * m;
			if ((r / 10) == 0)
			{
				if (m != 0)
					_putchar(' ');
				_putchar(r + '0');

				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
	}
