#include <stdio.h>
/**
 * main - program prints the size of various types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;
	int in;
	long int li;
	long long int lli;
	float oat;

	printf("size of a char: %lu byte(s)\n", sizeof(ch));
	printf("size of an int: %lu byte(s)\n", sizeof(in));
	printf("size of a long int: %lu byte(s)\n", sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of a float: %lu byte(s)\n", sizeof(oat));
	return (0);
}
