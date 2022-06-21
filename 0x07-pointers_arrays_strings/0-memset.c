#include "holberton.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: points a memory area.
 * @b: constant byte b.
 * @n: size
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
