#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints numbers of base 16 in lower_case
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig, letterhex, n;

	for (dig = 48, n = 0; n < 10; dig++, n++)
	{
		putchar(dig);
	}
	for (letterhex = 97, n = 1; n < 7; letterhex++, n++)
	{
		putchar(letterhex);
	}
	putchar(10);
	return (0);
}
