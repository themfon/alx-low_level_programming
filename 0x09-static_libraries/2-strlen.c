#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
