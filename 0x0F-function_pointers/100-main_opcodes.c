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
	int arg, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
