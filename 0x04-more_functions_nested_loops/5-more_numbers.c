#include "main.h"
/**
 *   more_numbers - display
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');

		}
			_putchar('\n');
	}
}
