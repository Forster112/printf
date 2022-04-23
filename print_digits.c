#include "main.h"

/**
 * print_number - prints a number sent to this function
 * @args: List of arguments
 *
 * Return: number of arguments printed
 */
int print_number(va_list args)
{
	int d;
	int div;
	int i;
	unsigned int dgt;

	d  = va_arg(args, int);
	div = 1;
	i = 0;

	if (d < 0)
	{
		i += _putchar('-');
		dgt = d * -1;
	}
	else
		dgt = d;

	for (; dgt / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		i += _putchar('0' + dgt / div);
		dgt %= div;
		div /= 10;
	}

	return (i);
}

/**
 * print_unsigned_num - Prints an unsigned number
 * @d: unsigned integer to be printed
 *
 * Return: amount of numbers printed
 */
int print_unsigned_num(unsigned int d)
{
	int div;
	int i;
	unsigned int dgt;

	div = 1;
	i = 0;

	dgt = d;

	for (; dgt / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		i += _putchar('0' + dgt / div);
		dgt %= div;
		div /= 10;
	}

	return (i);
}
