#include "main.h"
/**
 * _strstr - finds the first occurence of the substring
 * @haystack: string to search from
 * @needle: substring to search from
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
