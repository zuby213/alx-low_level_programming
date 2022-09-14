#include "main.h"
/**
 * print_alphabet - function to print alphabet
 * in lower case
 *
 * _putchar- function that outputs char to output
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
