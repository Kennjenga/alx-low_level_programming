#include <stdio.h>
/**
 * main -all possible comb of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int lp;

	for (lp = 48; lp < 58; lp++)
	{
		for (x = (lp + 1); x < 58; x++)
		{
			if (lp == x)
			{
				continue;
			}
			putchar(lp);
			putchar(x);
			if (x == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
