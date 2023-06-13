#include "main.h"

/**
 * _memset - Used to fill a block of memory with a specific value
 * @s: is the starting address of memory to be filled
 * @b: the desired value
 * @n: this is the number of bytes to be changed
 * Return: returns changed array with new values for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
