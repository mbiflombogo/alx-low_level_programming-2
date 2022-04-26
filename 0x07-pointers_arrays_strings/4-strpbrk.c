#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: first string
 * @accept: second string
 * Return: string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])

				return (s[i]);
		}
	}
	
	return ('\0');
}
