#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= argv[i];
		}
	}
	return (0);
}
