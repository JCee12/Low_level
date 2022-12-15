#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of single-digit number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig, i;

	for (dig = 48, i = 0; i < 10; dig++, i++)
	{
		putchar(dig);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
