#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: success 1 ,error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}