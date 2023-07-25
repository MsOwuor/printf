#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _memcpy -  copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * @bufferlen: bytes taken
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x + bufferlen] = src[x];
	return (dest);
}

/**
 * alloc_buffer - alloctaes character to buffer
 * @hold: string to allocate buffer
 * @hlen: hold length
 * @buffer: buffer
 * @size: end of buffer
 * @total: pointer to total character counter
 *
 * Return: beffer length
 */

int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total)
{
	int sizecpy = 0;

	if (hlen + size > BUFSIZE)
	{
		sizecpy = BUFSIZE - size;
		_memcpy(buffer, hold, sizecpy, size);
		_puts(buffer, BUFSIZE);
		hold += sizecpy;
		_memcpy(buffer, hold, hlen - sizecpy, 0);
		size = hlen - sizecpy;
		*total += BUFSIZE;
	}
	else
	{
		_memcpy(buffer, hold, hlen, size);
		size += hlen;
	}
	return (size);
}
