#include "main.h"
/**
 * _isupper - it checks if a character or string is in uppercase letters
 * @c: char to check
 *
 * Return: if the letters are uppercase return 1, else return 0
 */
int _isupper(int c)
{
	if (c>='A' && c<='Z')
		return (1);
	else
		return (0);
}
