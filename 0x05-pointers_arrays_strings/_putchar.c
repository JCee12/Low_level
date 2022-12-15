#include <unistd.h>



/**
 *
 *  * _putchar - writes character c to stdout
 *
 *   * @c: the character to print
 *
 *    *
 *
 *     * Return: 1 (success) and -1 (error)
 *
 *      */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
