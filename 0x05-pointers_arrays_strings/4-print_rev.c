#include "main.h"



/**
 *
 *  * print_rev - prints string
 *
 *   * @s: input string
 *
 *    * Return: nothing
 *
 *     */



void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
