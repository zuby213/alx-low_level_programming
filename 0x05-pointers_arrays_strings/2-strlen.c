#include "main.h"
/**
 *  _strlen - function to get the length of a string
 *
 *  @s: the string
 *
 *  Return: return len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}
