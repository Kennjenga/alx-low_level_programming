#include "main.h"

/**
 * * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *
 *Return: NULL in case of error, pointer to allocated space
 */

char *_strdup(char *str)
{
	char *copy;
	int index, l;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		l++;
	copy = malloc(sizeof(char) * (l + 1));
	if (copy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}
	copy[l] = '\0';
	return (copy);

}
