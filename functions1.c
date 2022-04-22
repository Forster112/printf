#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints characters
 * @args: character argument
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_str - prints strings
 * @args: string argument
 * Return: number of strings printed
 */
int print_str(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_percent - prints the percent sign
 * @args: sign argument
 * Return: returns the percent sign
 */
int print_percent(va_list args)
{
	char *per;

	per = "%";
	if (va_arg(args, int) == *per)
	{
		return (*per);
	}
	return (*per);
}
