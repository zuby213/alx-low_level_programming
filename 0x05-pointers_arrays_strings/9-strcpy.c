#include "main.h"
/**
 *  _strcpy - copy strings
 *
 *  @dest: destination
 *
 *  @src: Source
 *
 *  Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
	*dest++ = *src++;
	return (a);
}
