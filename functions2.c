#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_decimal - prints a decimal
 * @args: decimal arguments
 * Return: decimal count
 */
int print_decimal(va_list args)
{
	unsigned int absolute, aux, countnum, count;
	int num;

	count = 0;
	num = va_arg(args, int);
	if (num < 0)
	{
		absolute = (num * -1);
		count += _putchar('-');
	}
	else
		absolute = num;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_int - prints an integer
 * @args: integer argument
 * Return: the decimal function
 */
int print_int(va_list args)
{
	return (print_decimal(args));
}
