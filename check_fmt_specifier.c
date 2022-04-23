#include "main.h"


/**
 * print_char - Prints character
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}



/**
 * print_str - Prints a string
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}



/**
 * print_percent - Prints a percent symbol
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}



/**
 * print_int - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_int(va_list args)
{
	int num_len;

	num_len = print_number(args);
	return (num_len);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_unsigned_num(num));

	if (num < 1)
		return (-1);
	return (print_unsigned_num(num));
}
