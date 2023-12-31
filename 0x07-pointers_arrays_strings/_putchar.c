#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 returned, and errno is set appropriately.
 */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
