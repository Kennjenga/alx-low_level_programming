/**
 * This program prints the opcodes of its own code.
 * 
 * @param argc The `argc` parameter is the number of command-line arguments passed to the program.
 * @param argv The `argv` parameter is an array of strings, where each string represents a command-line
 * argument passed to the program. In this case, `argv` will contain two elements: `argv[0]` will be
 * the name of the program itself, and `argv[1]` will be
 * 
 * @return The main function is returning an integer value of 0, indicating success.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
