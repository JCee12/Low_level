#include "main.h"

/**
 * _strspn - gets the length of the substring
 * @s: string to check
 * @accept: nuber of bytes to take
 * Return: number of bytes in @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int x, f_char;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			f_char = 0;
			if (*s == accept[x])
			{
				res++;
				f_char = 1;
				break;
			}
		}
		if (!f_char)
			break;
		s++;
	}
	return (res);
}
