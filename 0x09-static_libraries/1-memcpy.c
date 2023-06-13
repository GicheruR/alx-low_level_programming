#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: this is where the memory is stored
 *@src: this is where the memory is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

