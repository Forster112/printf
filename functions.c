#include "main.h"
#include <stdio.h>


/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *string_inv(char *s)
{
	int i;
	int head;
	char tmp;
	char *dest;

	for (i = 0; s[i] != '\0'; i++)
	{}

	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, i);
	for (head = 0; head < i; head++, i--)
	{
		tmp = dest[i - 1];
		dest[i - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void base_print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}


/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int len;

	for (len = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (len);
}

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
