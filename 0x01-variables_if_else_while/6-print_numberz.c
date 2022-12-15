#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single digit characters of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, dig;

	for (i = 0, dig = 48; i < 10; i++, dig++)
	{
		putchar(dig);
	}
	putchar(10);
	return (0);
}
