#include "main.h"
/**
 *  _isalpha - Check for letters only
 *
 *  @c: This takes input
 *
 *  Return: Alway 1 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
