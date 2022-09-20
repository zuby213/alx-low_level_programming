#include "main.h"
/**
 * _puts - function to print a string
 *
 * @str: a string variable
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar('\n');
}
