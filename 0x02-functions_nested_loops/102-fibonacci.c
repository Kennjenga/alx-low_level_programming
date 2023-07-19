#include <stdio.h>

/**
 * fib - fibonnaci seq ( 0,1,1,2,3,5....)
 * @n: num of sequence
 *
 *Return: seq
 */
void fib(int n)
{
	long int first = 1, second = 2, next, i;

	/*printf("Fibonacci Series: ");*/
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			next = first;
		} else if (i == 2)
		{
			next = second;
		} else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (i == n)
		{
			printf("%lu", next);
		} else
			printf("%lu, ", next);
	}
	printf("\n");
}
/**
 * main - main func
 *
 * Return: 0 (Success)
 */
int main(void)
{
	fib(50);
	return (0);
}
