#include "main.h"
/**
 * print_most_numbers- a function to print numbers
 * 0-9 except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 4 || a == 2)
			continue;
		else
			_putchar(a + '0');
	}
	_putchar('\n');
}
