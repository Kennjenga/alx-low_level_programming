#include <stdio.h>
/**
 * main -all possible comb of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 48;
	int lp;

	for (lp = 48; lp < 58; lp++)
	{
		while (x < 58)
		{
			if (lp == x)
			{
				x++;
				continue;
			}
			putchar(lp);
			putchar(x);
			putchar(',');
			putchar(' ');
			x++;
		}
	}
	putchar('\n');
	return (0);
}
