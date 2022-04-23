#include "main.h"
#include <stdio.h>
int hex_check(int, char);

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	unsigned int num_decim;
	int i, len;
	char *str;

	char *str_rev;

	num_decim = va_arg(list, unsigned int);
	if (num_decim == 0)
		return (_putchar('0'));
	if (num_decim < 1)
		return (-1);
	len = base_len(num_decim, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num_decim > 0; i++)
	{
		if (num_decim % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num_decim = num_decim / 2;
	}
	str[i] = '\0';
	str_rev = string_inv(str);
	if (str_rev == NULL)
		return (-1);
	base_print(str_rev);
	free(str);
	free(str_rev);
	return (len);
}

/**
 * octal_print - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */
int octal_print(va_list list)
{
	unsigned int num;
	int i;
	char *octal_rep;
	char *str_rev;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	i = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * i + 1);
	if (octal_rep == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		octal_rep[i] = (num % 8) + 48;
		num = num / 8;

	}
	octal_rep[i] = '\0';
	str_rev = string_inv(octal_rep);
	if (str_rev == NULL)
		return (-1);

	base_print(str_rev);
	free(octal_rep);
	free(str_rev);
	return (i);
}

/**
 * hex_print - Prints a representation of a decimal number on base16 lowercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int hex_print(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = string_inv(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	base_print(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}


/**
 * heX_print - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int heX_print(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = string_inv(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	base_print(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
