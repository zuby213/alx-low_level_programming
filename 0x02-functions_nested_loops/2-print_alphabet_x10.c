#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet
 * from a- z in 10 lines
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
