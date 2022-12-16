#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: the string to check
 * @c: the character to find
 * Return: pointer to @s or 0
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
