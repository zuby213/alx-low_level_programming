#include "main.h"
/**
 *  _islower- checks if a letter is a small letter
 *   or capital letter.
 *
 *   @c: character used as input
 *
 * Return: Always 1 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
