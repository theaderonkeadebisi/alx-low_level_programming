#include "main.h"
/**
 * _strpbrk - locates first occurence in string s
 * @s: string to search from
 * @accept: string to search
 * Return: pointer to byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
			}
	s++;
	}

	return ('\0');
}
