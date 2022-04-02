include "main.h"
/**
 * _strstr - finds the substring
 * @haystack: string
 * @needle: string substring
 * Return: pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, c;

		i = 0;
		c = 0;

		while (haystack[i] != ;\o')
		{
			j = 0
		       	while (needle[j + c] != '\0' && haystack[i + c] != '\0'
				&& needle[j + c] == haystack[i + c])
			{
				if (haystack[i + c] != needle[j + c])
					break;
				c++;
			}		
			if (needlee[j + c] == '\0')
				return (haystack[i]);
			j++
			i++;
		}
		

		return (NULL);
}
