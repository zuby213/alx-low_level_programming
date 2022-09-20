#include "main.h"
#include <stdio.h>
/**
 *  print_array - print array
 *
 *  @a: an array
 *
 *  @n: a limiting variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		continue;
		printf(", ");
	}
	printf("\n");
}
