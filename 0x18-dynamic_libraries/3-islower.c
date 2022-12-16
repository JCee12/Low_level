# include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the integer that will be used for the argument of the function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
