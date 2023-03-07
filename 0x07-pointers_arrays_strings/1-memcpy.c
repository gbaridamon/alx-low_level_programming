#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where value is stored
 * @src: memory where value is copied
 * @n: number of bytes
 *
 * Return: memory copied with change in n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for(; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
