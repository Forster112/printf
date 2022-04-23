#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 *
 * Return: number of printed character
 */

int _printf(const char *format, ...)
{
	int character_print;
	converter_func f_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
		{"r", print_rev},
		{"b", print_binary},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", octal_print},
		{"x", hex_print},
		{"X", heX_print},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	/*Calling parser function*/
	character_print = parse_func(format, f_list, args);
	va_end(args);
	return (character_print);
}
