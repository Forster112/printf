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
	if (format != NULL)
	{
		int count = 0, i = 0;
		int (*m)(va_list);
		va_list args;

        va_start(args, format);
        
        if (format[0] == '%' && format[1] == '\0')
        {

            return (-1);
        }

        while (format[i] != '\0')
        {
            if (format[i] == '%')
            {
                if (format[i + 1] == '%')
                {
                    count += _putchar(format[i]);
                    i += 2;
                }
                else if (format[i + 1] == '\0')
                {
                    count += _putchar(format[i]);
                    break;
                }
                else
                {
                    m = spec_checker(format[i + 1]);
                    if (m)
                    {
                        count = m(args);
                    }
                    else
                    {
                        count = _putchar(format[i]) + _putchar(format[i + 1]);
                    }
                    i += 2;
                }
            }
            else
            {
                count += _putchar(format[i]);
                i++;
            }
        }
        va_end(args);
        return (count);
    }
    return (-1);
}
